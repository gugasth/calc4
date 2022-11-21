//
// Created by Guga on 20/11/2022.
//

#include "sistema.h"


double funcao(double valor){
    float aux;
    //Função: 2^x−3*x = 0
    aux = pow(2, valor) - (3 * valor);
    return aux;
}

double modulo(double valor){
    return fabs(valor);
}

double deriva(double valor){
    double aux;
    //Derivada da função
    aux = pow(2, valor) * log(2) - 3;
    return aux;
}

void metodo_bisseccao(double & interval1, double & interval2){
    double k, M, e, x;

    //Precisão: 10^-15
    e = pow(10, -15);

    //Se (b - a) < ε  então escolha para raiz  qualquer ∈ [a, b].  FIM
    if((interval2 - interval1) < e){
        std::cout << "O valor da raiz e: " << interval1;
        return;
    }

    // k=1
    k = 1;
    while (true) {
        // x= a+b/2
        x = (interval1 + interval2) / 2;
        //M= F(a)
        M = funcao(interval1);

        //Se  f(x) > 0, faça a= x.
        if((M * funcao(x)) > 0){
            //a= x
            interval1 = x;
        }else{
            //b= x
            interval2 = x;
        }
        //Se (b -a) < ε ,então escolha para raiz x pertencente [a, b]
        if((interval2 - interval1) < e || k == 500){

            //Quadro de resposta
            std::cout << "Metodo da bisseccao:" << std::endl;
            std::cout <<"Numero de iteracoes: " << k << std::endl;
            std::cout << std::fixed << std::setprecision(12);
            std::cout << "Valor da raiz e: " << x << std::endl;
            break;
        }
        k++; //k = k + 1.
    }
}

void metodo_newton(double & interval1, double & interval2){
    double x0, x1, k, e, x, aux;

    //a. x0: aproximação inicial;
    x0 = (interval1 + interval2)/2;

    //Precisão ε1 e ε2
    e = pow(10, -15);

    aux = funcao(x0);

    //Se |f (x0)| < ε1 , faça raiz = x0
    if(modulo(aux) < e){
        x = x0; //x = x0
        std::cout << std::endl << "Metodo de Newton" << std::endl;
        std::cout << std::fixed << std::setprecision(12);
        std::cout << "O valor da raiz é: " << x;
        return;
    }
    k = 1; //k= 1
    while (true) {
        //x1 = x0 - ((f(x0)/f’(x0))
        x1 = x0 - (funcao(x0)/deriva(x0));

        aux = funcao(x1);

        //Se |f (x1)| < ε1 ou Se |f (x1 -x0)| < ε1 , faça raiz = x1
        if (modulo(aux) < e || (modulo(x1 - x0) < e)){
            x = x1; //x= x0
            std::cout << std::endl << "Metodo de Newton"  << std::endl;
            std::cout <<"Numero de iteracoes: " << k << std::endl;
            std::cout << std::fixed << std::setprecision(12);
            std::cout << "Valor da raiz e: " << x;
            break;
        }
        x0 = x1; //x0 = x1
        k++; //k = k + 1
    }
}

void metodo_posicaofalsa(double & interval1, double & interval2){
    double k, M, e, x, aux, aux2;
    k = 0;

    //Precisão ε
    e = pow(10, -15);

    //Se (b - a) < ε1  então escolha para raiz  qualquer ∈ [a, b].
    if((interval2 - interval1) < e){
        std::cout << "Metodo do posicao falsa:" << std::endl;
        std::cout <<"Numero de iteracoes: " << k << std::endl;
        std::cout << std::fixed << std::setprecision(12);
        std::cout << "Valor da raiz é: " << interval1 << std::endl;
        return;
    }

    aux = funcao(interval1);
    aux2 = funcao(interval2);

    //Se |f (a)| < ε2 ou |f (b)| < ε2 escolha a ou b como raiz.
    if(modulo(aux) < e || modulo(aux2) < e){
        std::cout << "Metodo do posicao falsa:" << std::endl;
        std::cout <<"Numero de iteracoes: " << k << std::endl;
        std::cout << std::fixed << std::setprecision(12);
        std::cout << "Valor da raiz é: " << interval1 << std::endl;
        return;
    }
    k = 1; //k=1
    while (true) {
        //x= (af(b) - bf(a))/ (f(b) - f(a))
        x = ((interval1 * funcao(interval2)) - (interval2 * funcao(interval1))) / (funcao(interval2) - funcao(interval1));


        aux = funcao(x);
        //se |f(x)| < e: mostra x
        if (modulo(aux) < e){
            std::cout << "Metodo do posicao falsa:" << std::endl;
            std::cout <<"Numero de iteracoes: " << k << std::endl;
            std::cout << std::fixed << std::setprecision(12);
            std::cout << "Valor da raiz e: " << x << std::endl;
            break;
        }
        //Se Mf (x) > 0, faça a= x.
        M = funcao(interval1);
        if((M * funcao(x)) > 0){
            interval1 = x;
        }else{
            interval2 = x;
        }
        //Se (b - a) < ε1, então escolha para raiz x pertencente [a, b].
        if(modulo((interval2 - interval1)) < e || k == 500){
            std::cout << "Metodo do posicao falsa:" << std::endl;
            std::cout <<"Numero de iteracoes: " << k << std::endl;
            std::cout << std::fixed << std::setprecision(12);
            std::cout << "Valor da raiz e: " << x << std::endl;
            break;
        }
        k++; // k = k + 1
    }
}

void metodo_secante(double & interval1, double & interval2){
    double x0, x1, x2, k, e, x, aux;
    k = 0;

    //x0: aproximação inicial;
    x0 = interval1;
    x1 = interval2;

    //Precisão ε1 e ε2
    e = pow(10, -15);

    aux = funcao(x0);
    //Se |f (x0)| < ε1 , faça raiz = x0.
    if(modulo(aux) < e){
        x = x0;
        std::cout << std::endl <<"Metodo da secante: " << std::endl;
        std::cout <<"Numero de iteracoes: " << k << std::endl;
        std::cout << std::fixed << std::setprecision(12);
        std::cout << "Valor da raiz e: " << x;
        return;
    }
    aux = funcao(x1);
    //Se |f(x1)| < ε1 ou se |x1 -x0| < ε2. Faça raiz= x1
    if (modulo(aux) < e || (modulo(x1 - x0) < e)){
        x = x1;
        std::cout << std::endl <<"Metodo da secante: "  << std::endl;
        std::cout <<"Numero de iteracoes: " << k << std::endl;
        std::cout << std::fixed << std::setprecision(12);
        std::cout << "Valor da raiz e: " << x;
        return;
    }

    k = 1; //k=1
    while (true) {
        //x2= x1- (f(x1)/(f(x1)-f(x0))*(x1-x0)
        x2 = x1 - ((funcao(x1)/(funcao(x1) - funcao(x0))) * (x1 - x0));

        aux = funcao(x2);
        //Se |f(x2)| < ε1 ou se |x2 -x1| < ε2. Faça raiz= x2
        if (modulo(aux) < e || (modulo(x1 - x0) < e)){
            x = x2;

            std::cout << std::endl << "Metodo da secante: "  << std::endl;
            std::cout <<"Numero de iteracoes: " << k << std::endl;
            std::cout << std::fixed << std::setprecision(12);
            std::cout << "Valor da raiz e: " << x << std::endl << std::endl;
            break;
        }
        x0 = x1; //x0 = x1
        x1 = x2; //x1 = x2
        k++; //k = k + 1
    }
}