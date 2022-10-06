/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   SegundaLista.cpp
 * Author: aluno
 * 
 * Created on 18 de agosto de 2022, 09:10
 */

#include "SegundaLista.h"
#include <iostream>
#include <math.h>

using namespace std;


SegundaLista::SegundaLista() {
}

SegundaLista::SegundaLista(const SegundaLista& orig) {
}

SegundaLista::~SegundaLista() {
}

void SegundaLista::lerValores() {
    
    int A=0, B=0, C=0;
    cout << "Digite o valor de A: ";
    cin >> A;
    cout << "Digite o valor de B: ";
    cin >> B;
    cout << "Digite o valor de C: ";
    cin >> C;    
    
    r=pow(A+B,2);
    s=pow(A+C,2);
    
    cout << "A o resultado da expressão é: " << this->Conta();
}

float SegundaLista::Conta(){
    d=r+s/2;//utiliza-se return quando a variável não é void.
    
}