#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double funcao(double valor){
    float aux;
    aux = pow(2, valor) - (3 * valor);
    return aux;
}


int main() {
    double a, b, k, M, e, x;

    a = 1;
    b = 2;
    e = pow(10, -15);

    if((b - a) < e){
        cout << "valor da raiz é: " << a;
        return 0;
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
    return 0;
}
