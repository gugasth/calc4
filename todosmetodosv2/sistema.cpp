//
// Created by Guga on 20/11/2022.
//

#include "sistema.h"


double funcao(double valor){
    float aux;
    aux = pow(2, valor) - (3 * valor);
    return aux;
}

double modulo(double valor){
    return fabs(valor);
}

double deriva(double valor){
    double aux;
    aux = pow(2, valor) * log(2) - 3;
    return aux;
}

void metodo_bisseccao(double & interval1, double & interval2){
    double k, M, e, x;

    e = pow(10, -15);

    if((interval2 - interval1) < e){
        std::cout << "O valor da raiz é: " << interval1;
        return;
    }

    k = 1;
    while (true) {
        x = (interval1 + interval2) / 2;
        M = funcao(interval1);

        if((M * funcao(x)) > 0){
            interval1 = x;
        }else{
            interval2 = x;
        }
        if((interval2 - interval1) < e || k == 500){

            std::cout << "Método da bissecção:" << std::endl;
            std::cout <<"Numero de iterações: " << k << std::endl;
            std::cout << std::fixed << std::setprecision(12);
            std::cout << "Valor da raiz é: " << x << std::endl;
            break;
        }
        k++;
    }
}

void metodo_newton(double & interval1, double & interval2){
    double x0, x1, k, e, x, aux;


    x0 = (interval1 + interval2)/2;

    e = pow(10, -15);

    aux = funcao(x0);
    if(modulo(aux) < e){
        x = x0;
        std::cout << std::endl << "Método de Newton" << std::endl;
        std::cout << std::fixed << std::setprecision(12);
        std::cout << "O valor da raiz é: " << x;
        return;
    }
    k = 1;
    while (true) {
        x1 = x0 - (funcao(x0)/deriva(x0));

        aux = funcao(x1);
        if (modulo(aux) < e || (modulo(x1 - x0) < e)){
            x = x1;
            std::cout << std::endl << "Método de Newton"  << std::endl;
            std::cout <<"Numero de iterações: " << k << std::endl;
            std::cout << std::fixed << std::setprecision(12);
            std::cout << "Valor da raiz é: " << x;
            break;
        }
        x0 = x1;
        k++;
    }
}

void metodo_posicaofalsa(double & interval1, double & interval2){
    double k, M, e, x, aux, aux2;
    k = 0;

    e = pow(10, -15);

    if((interval2 - interval1) < e){
        std::cout << "Método do posição falsa:" << std::endl;
        std::cout <<"Numero de iterações: " << k << std::endl;
        std::cout << std::fixed << std::setprecision(12);
        std::cout << "Valor da raiz é: " << interval1 << std::endl;
        return;
    }

    aux = funcao(interval1);
    aux2 = funcao(interval2);
    if(modulo(aux) < e || modulo(aux2) < e){
        std::cout << "Método do posição falsa:" << std::endl;
        std::cout <<"Numero de iterações: " << k << std::endl;
        std::cout << std::fixed << std::setprecision(12);
        std::cout << "Valor da raiz é: " << interval1 << std::endl;
        return;
    }
    k = 1;
    while (true) {
        x = ((interval1 * funcao(interval2)) - (interval2 * funcao(interval1))) / (funcao(interval2) - funcao(interval1));

        //se |f(x)| < e: mostra x
        aux = funcao(x);
        if (modulo(aux) < e){
            std::cout << "Método do posição falsa:" << std::endl;
            std::cout <<"Numero de iterações: " << k << std::endl;
            std::cout << std::fixed << std::setprecision(12);
            std::cout << "Valor da raiz é: " << x << std::endl;
            break;
        }
        M = funcao(interval1);
        if((M * funcao(x)) > 0){
            interval1 = x;
        }else{
            interval2 = x;
        }
        if(modulo((interval2 - interval1)) < e || k == 500){
            std::cout << "Método do posição falsa:" << std::endl;
            std::cout <<"Numero de iterações: " << k << std::endl;
            std::cout << std::fixed << std::setprecision(12);
            std::cout << "Valor da raiz é: " << x << std::endl;
            break;
        }
        k++;
    }
}

void metodo_secante(double & interval1, double & interval2){
    double x0, x1, x2, k, e, x, aux;
    k = 0;

    x0 = interval1;
    x1 = interval2;

    e = pow(10, -15);

    aux = funcao(x0);
    if(modulo(aux) < e){
        x = x0;
        std::cout << std::endl <<"METODO DA SECANTE: " << std::endl;
        std::cout <<"Numero de iterações: " << k << std::endl;
        std::cout << std::fixed << std::setprecision(12);
        std::cout << "Valor da raiz é: " << x;
        return;
    }
    aux = funcao(x1);
    if (modulo(aux) < e || (modulo(x1 - x0) < e)){
        x = x1;
        std::cout << std::endl <<"METODO DA SECANTE: "  << std::endl;
        std::cout <<"Numero de iterações: " << k << std::endl;
        std::cout << std::fixed << std::setprecision(12);
        std::cout << "Valor da raiz é: " << x;
        return;
    }

    k = 1;
    while (true) {
        x2 = x1 - ((funcao(x1)/(funcao(x1) - funcao(x0))) * (x1 - x0));

        aux = funcao(x2);
        if (modulo(aux) < e || (modulo(x1 - x0) < e)){
            x = x2;

            std::cout << std::endl << "METODO DA SECANTE: "  << std::endl;
            std::cout <<"Número de iterações: " << k << std::endl;
            std::cout << std::fixed << std::setprecision(12);
            std::cout << "Valor da raiz é: " << x << std::endl << std::endl;
            break;
        }
        x0 = x1;
        x1 = x2;
        k++;
    }
}