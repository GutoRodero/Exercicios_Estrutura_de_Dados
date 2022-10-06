/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   PrimeiraLista.cpp
 * Author: aluno
 * 
 * Created on 18 de agosto de 2022, 08:37
 */

#include "PrimeiraLista.h"
#include <iostream>
#include <math.h>

using namespace std;

PrimeiraLista::PrimeiraLista() {
}

PrimeiraLista::PrimeiraLista(const PrimeiraLista& orig) {
}

PrimeiraLista::~PrimeiraLista() {
}

void PrimeiraLista::LerDados() {
    cout << "Digite o valor de x1: ";
    cin >> this->x1;
    cout << "Digite o valor de x2: ";
    cin >> this->x2;
    cout << "Digite o valor de y1: ";
    cin >> this->y1;
    cout << "Digite o valor de y2: ";
    cin >> this->y2;
    
    cout << "A distância é: " << this->calcDistEucli();
    
}

float PrimeiraLista::calcDistEucli() {
    
    float d;
    d=sqrt(pow((this->x2-this->x1),2)
            + pow((this->y2-this->y1),2));
    
    return d;
}