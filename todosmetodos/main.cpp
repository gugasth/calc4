#include <iostream>
#include <math.h>
#include <iomanip>
#define PiscaG   "\e[32;5m"
#define PiscaB   "\e[34;5m"
#define NC      "\e[0m"
#define RED     "\e[0;31m"
#define GRN     "\e[0;32m"
#define BLU     "\033[34m"
#define CYN     "\e[0;36m"
#define REDB    "\e[30;41m"
#define LIL     "\e[35;41m"

using namespace std;

double funcao(double valor){
    float aux;
    aux = pow(2, valor) - (3 * valor);
    return aux;
}

double modulo(double valor){
    return fabs(valor);
}

double derivada(double valor){
    double aux;

    aux = pow(2, valor) * log(2) - 3;

    return aux;
}

void metodo_bisseccao(){
    double a, b, k, M, e, x;

    a = -2;
    b = 2;
    e = pow(10, -15);

    if((b - a) < e){
        cout << "valor da raiz é: " << a;
        return;
    }

    k = 1;
    while (true) {
        x = (a + b) / 2;
        M = funcao(a);

        if((M * funcao(x)) > 0){
            a = x;
        }else{
            b = x;
        }
        if((b - a) < e || k == 500){

            cout << "Método da bissecção:" << endl << endl;
            cout <<"numero de iterações: " << k << endl;
            cout << fixed << setprecision(12);
            cout << "valor da raiz é: " << x << endl;
            break;
        }
        k++;
    }
}

void metodo_newton(){
        double x0, x1, a, b, k, e, x, aux;
        a = -2;
        b = 2;

        x0 = (a + b)/2;

        e = pow(10, -15);

        aux = funcao(x0);
        if(modulo(aux) < e){
            x = x0;
            cout << "Método de Newton" << endl << endl;
            cout << fixed << setprecision(15);
            cout << "valor da raiz é: " << x;
            return;
        }
        k = 1;
        while (true) {
            x1 = x0 - (funcao(x0)/derivada(x0));

            aux = funcao(x1);
            if (modulo(aux) < e || (modulo(x1 - x0) < e)){
                x = x1;
                cout << "Método de Newton" << endl << endl;
                cout <<"numero de iterações: " << k << endl;
                cout << fixed << setprecision(15);
                cout << "valor da raiz é: " << x;
                break;
            }
            x0 = x1;
            k++;
        }
    }

    void metodo_posicaofalsa(){
        double a, b, k, M, e, x, aux, aux2;
        k = 0;
        a = -2;
        b = 2;
        e = pow(10, -15);

        if((b - a) < e){
            cout << "Método do posição falsa:" << endl << endl;
            cout <<"numero de iterações: " << k << endl;
            cout << fixed << setprecision(12);
            cout << "valor da raiz é: " << a << endl;
            return;
        }

        aux = funcao(a);
        aux2 = funcao(b);
        if(modulo(aux) < e || modulo(aux2) < e){
            cout << "Método do posição falsa:" << endl << endl;
            cout <<"numero de iterações: " << k << endl;
            cout << fixed << setprecision(12);
            cout << "valor da raiz é: " << a << endl;
            return;
        }
        k = 1;
        while (true) {
            x = ((a * funcao(b)) - (b * funcao(a)))/ (funcao(b) - funcao(a));

            //se |f(x)| < e: mostra x
            aux = funcao(x);
            if (modulo(aux) < e){
                cout << "Método do posição falsa:" << endl << endl;
                cout <<"numero de iterações: " << k << endl;
                cout << fixed << setprecision(12);
                cout << "valor da raiz é: " << x << endl;
                break;
            }
            M = funcao(a);
            if((M * funcao(x)) > 0){
                a = x;
            }else{
                b = x;
            }
            if(modulo((b - a)) < e || k == 500){
                cout << "Método do posição falsa:" << endl << endl;
                cout <<"numero de iterações: " << k << endl;
                cout << fixed << setprecision(12);
                cout << "valor da raiz é: " << x << endl;
                break;
            }
            k++;
        }
    }

    void metodo_secante(){
        double x0, x1, x2, a, b, k, e, x, aux;
        k = 0;
        a = -2;
        b = 2;

        x0 = a;
        x1 = b;

        e = pow(10, -15);

        aux = funcao(x0);
        if(modulo(aux) < e){
            x = x0;
            cout << endl <<"METODO DA SECANTE: " << endl << endl;
            cout <<"numero de iterações: " << k << endl;
            cout << fixed << setprecision(15);
            cout << "valor da raiz é: " << x;
            return;
        }
        aux = funcao(x1);
        if (modulo(aux) < e || (modulo(x1 - x0) < e)){
            x = x1;
            cout << endl <<"METODO DA SECANTE: " << endl << endl;
            cout <<"numero de iterações: " << k << endl;
            cout << fixed << setprecision(15);
            cout << "valor da raiz é: " << x;
            return;
        }

        k = 1;
        while (true) {
            x2 = x1 - ((funcao(x1)/(funcao(x1) - funcao(x0))) * (x1 - x0));

            aux = funcao(x2);
            if (modulo(aux) < e || (modulo(x1 - x0) < e)){
                x = x2;

                cout <<"METODO DA SECANTE: " << endl << endl;
                cout <<"Número de iterações: " << k << endl;
                cout << fixed << setprecision(12);
                cout << "Valor da raiz é: " << x << endl << endl;
                break;
            }
            x0 = x1;
            x1 = x2;
            k++;
        }
    }




    int main() {

    int resposta_usuario;
    cout << "De qual método  você quer resolver o trabalhinho?" << endl;
    cout << "Digite 1 pra Bissecção" << endl;
    cout << "Digite 2 pra Posição Falsa" << endl;
    cout << "Digite 3 pra Newton" << endl;
    cout << "Digite 4 pra Secante" << endl;
    cin >> resposta_usuario;


    switch(resposta_usuario){
        case 1:
            metodo_bisseccao();
            break;

        case 2:
            metodo_posicaofalsa();
            break;

        case 3:
            metodo_newton();
            break;

        case 4:
            metodo_secante();
            break;

        default:
            cout << RED "Opção inválida!" << endl;
            cout << RED "Entre com um número de 1 a 4." << endl;
    }

}