/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   TerceiraLista.cpp
 * Author: aluno
 * 
 * Created on 25 de agosto de 2022, 09:12
 */

#include "TerceiraLista.h"
#include <iostream>

using namespace std;

TerceiraLista::TerceiraLista() {
}

TerceiraLista::TerceiraLista(const TerceiraLista& orig) {
}

TerceiraLista::~TerceiraLista() {
}


void TerceiraLista::LerNumero(){
    int num;
    
    cout << "Informe um valor: ";
    cin >> num;
    
    return Verificar(num);
}

void TerceiraLista::Verificar(int num){
    
    if (num >0){
        cout << "1";
    }else
        if (num==0){
            cout << "0";
    }else
        cout << "-1";
}