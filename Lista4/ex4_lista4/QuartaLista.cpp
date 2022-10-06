/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   QuartaLista.cpp
 * Author: aluno
 * 
 * Created on 25 de agosto de 2022, 09:23
 */

#include "QuartaLista.h"
#include <iostream>
#include <math.h>

using namespace std;

QuartaLista::QuartaLista() {
}

QuartaLista::QuartaLista(const QuartaLista& orig) {
}

QuartaLista::~QuartaLista() {
}

void QuartaLista::LerDados(){
    char a=0, b=0, c=0;    
    float valor;
    cout << "Informe o valor de a: ";
    cin >> a;
    
    cout << "Informe o valor de b: ";
    cin >> b;
    
    cout << "Informe o valor de c: ";
    cin >> c;
    
    valor = Calcular(a,b,c);
    cout << "\nO valor do delta é: " << valor;
}


float QuartaLista::Calcular(int a, int b, int c){
    float delta=0;
    
    return delta = (pow(b,2))-(4*a*c);
}