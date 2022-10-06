/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   QuintaLista.cpp
 * Author: aluno
 * 
 * Created on 25 de agosto de 2022, 10:26
 */

#include "QuintaLista.h"
#include <iostream>
#include <math.h>

using namespace std;

QuintaLista::QuintaLista() {
}

QuintaLista::QuintaLista(const QuintaLista& orig) {
}

QuintaLista::~QuintaLista() {
}

void QuintaLista::LerDados(){
    int raio;  
    float valor;
    cout << "Informe o valor do raio da circunferência: ";
    cin >> raio;
    
    valor = Calcular(raio);
    cout << "\nO valor do volume é: " << valor;
}


float QuintaLista::Calcular(int raio){
    float v;
    
    return v = (4/3)*M_PI*pow(raio,3);
}