#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double modulo(double valor){
    return fabs(valor);
}

double funcao(double valor){
    float aux;
    aux = pow(2, valor) - (3 * valor);
    return aux;
}
// 2^x - 3x = 0 ; {1,2} ; E{10^-15}
int main() {

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
        return 0;
    }

    aux = funcao(a);
    aux2 = funcao(b);
    if(modulo(aux) < e || modulo(aux2) < e){
        cout << "Método do posição falsa:" << endl << endl;
        cout <<"numero de iterações: " << k << endl;
        cout << fixed << setprecision(12);
        cout << "valor da raiz é: " << a << endl;
        return 0;
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
    return 0;
}
