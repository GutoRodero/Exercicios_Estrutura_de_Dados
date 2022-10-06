/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   PrimeiraLista.cpp
 * Author: aluno
 * 
 * Created on 25 de agosto de 2022, 08:41
 */

#include "PrimeiraLista.h"
#include <iostream>

using namespace std;

PrimeiraLista::PrimeiraLista() {
}

PrimeiraLista::PrimeiraLista(const PrimeiraLista& orig) {
}

PrimeiraLista::~PrimeiraLista() {
}

void PrimeiraLista::LerDados(){
    int n1, n2;
    
    cout << "Informe o primeiro valor: ";
    cin >> n1;
    
    cout << "Informe o segundo valor: ";
    cin >> n2;
    
    if (n1>n2){
        cout << "O primeiro valor é o maior!";
    }else{
    cout << "O segundo valor é o maior!";
    }
}