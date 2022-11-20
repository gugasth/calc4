#include "sistema.h"

    int main() {
    int resposta_usuario;
    std::cout << "Qual método você deseja aplicar na função?" << std::endl;
    std::cout << "Digite 1 pra Bissecção" << std::endl;
    std::cout << "Digite 2 pra Posição Falsa" << std::endl;
    std::cout << "Digite 3 pra Newton" << std::endl;
    std::cout << "Digite 4 pra Secante" << std::endl;
    std::cin >> resposta_usuario;

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

        default:
            std::cout <<  "Opção inválida!" << std::endl;
            std::cout <<  "Entre com um número de 1 a 4." << std::endl;
    }

}