/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   SetimaLista.cpp
 * Author: Usuario
 * 
 * Created on 22 de agosto de 2022, 18:08
 */

#include "SetimaLista.h"
#include <iostream>
#include <math.h>

using namespace std;

SetimaLista::SetimaLista() {
}

SetimaLista::SetimaLista(const SetimaLista& orig) {
}

SetimaLista::~SetimaLista() {
}

void SetimaLista::LerDados(){
    int preco;
    
    cout << "Informe o valor do carro na fábrica: ";
    cin >> preco;
    
    cout << "O valor do carro ao consumidor é: R$" << (preco*0.28)+(preco*0.45)+preco;
}