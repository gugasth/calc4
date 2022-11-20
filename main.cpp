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

int main() {

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
        return 0;
    }
    aux = funcao(x1);
    if (modulo(aux) < e || (modulo(x1 - x0) < e)){
        x = x1;
        cout << endl <<"METODO DA SECANTE: " << endl << endl;
        cout <<"numero de iterações: " << k << endl;
        cout << fixed << setprecision(15);
        cout << "valor da raiz é: " << x;
        return 0;
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
    return 0;
}
