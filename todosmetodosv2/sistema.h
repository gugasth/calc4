//
// Created by Guga on 20/11/2022.
//

#ifndef TODOSMETODOS_SISTEMA_H
#define TODOSMETODOS_SISTEMA_H

#include <iostream>
#include <iomanip>
#include <math.h>


double funcao(double valor);

double modulo(double valor);

double deriva(double valor);

void metodo_bisseccao(double & interval1, double & interval2);

void metodo_newton(double & interval1, double & interval2);

void metodo_posicaofalsa(double & interval1, double & interval2);

void metodo_secante(double & interval1, double & interval2);


#endif //TODOSMETODOS_SISTEMA_H
