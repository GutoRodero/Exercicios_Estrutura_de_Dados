/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   SextaLista.cpp
 * Author: aluno
 * 
 * Created on 25 de agosto de 2022, 10:39
 */

#include "SextaLista.h"
#include <iostream>
#include <math.h>

using namespace std;

SextaLista::SextaLista() {
}

SextaLista::SextaLista(const SextaLista& orig) {
}

SextaLista::~SextaLista() {
}

void SextaLista::LerDados() {
    int X = 0, Y = 0, Z = 0;
    float valor;
    cout << "Informe o valor de X: ";
    cin >> X;

    cout << "Informe o valor de Y: ";
    cin >> Y;

    cout << "Informe o valor de Z: ";
    cin >> Z;

    valor = this->Calcular(X, Y, Z);

    if (valor == 1)
        cout << "\nTriângulo Equilátero ";
    else
        if (valor == 2)
        cout << "\nTriângulo Isóceles";
    else
        if (valor == 3)
        cout << "\nTriângulo Escaleno";
        else 
            if (valor == 0)
                cout << "Propriedades necessárias não alcançadas!";
}

float SextaLista::Calcular(int X, int Y, int Z) {

    if ((Z > X+Y) || (X > Y+Z) || (Y > X+Z)){
        return 0;
    }
    else{
    if (X == Y && X == Z)
        return 1;
    else
        if (((X == Y) && (X != Z)) || ((X == Z) && (X != Y)) || (Y == Z) && (Y != X))
        return 2;
    else
        if (X != Y && X != Z)
        return 3;
        
    }
    
}