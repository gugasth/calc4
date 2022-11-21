#include "sistema.h"

    int main() {
    int resposta_usuario;
    //Menu principal
    std::cout << "Qual metodo voce deseja aplicar na funcao?" << std::endl;
    std::cout << "Digite 1 pra Bisseccao" << std::endl;
    std::cout << "Digite 2 pra Posicao Falsa" << std::endl;
    std::cout << "Digite 3 pra Newton" << std::endl;
    std::cout << "Digite 4 pra Secante" << std::endl;
    std::cin >> resposta_usuario;

    //Intervalo inicial  [a, b]
    double intervalo_inicial = -2;
    double intervalo_final = 2;
    switch(resposta_usuario){
        case 1:
            metodo_bisseccao(intervalo_inicial, intervalo_final);
            break;

        case 2:
            metodo_posicaofalsa(intervalo_inicial, intervalo_final);
            break;

        case 3:
            metodo_newton(intervalo_inicial, intervalo_final);
            break;

        case 4:
            metodo_secante(intervalo_inicial, intervalo_final);
            break;
    //Quando opção invalida
        default:
            std::cout <<  "Opção invalida!" << std::endl;
            std::cout <<  "Entre com um numero de 1 a 4." << std::endl;
    }

}