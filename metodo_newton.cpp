#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double modulo(double valor){
    return fabs(valor);
}

double derivada(double valor){
    double aux;

    aux = pow(2, valor) * log(2) - 3;

    return aux;
}

double funcao(double valor){
    float aux;
    aux = pow(2, valor) - (3 * valor);
    return aux;
}


int main() {

    double x0, x1, a, b, k, e, x, aux, aux2;
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
        return 0;
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
    return 0;
}

