/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   TerceiraLista.cpp
 * Author: Usuario
 * 
 * Created on 20 de agosto de 2022, 14:51
 */

#include "TerceiraLista.h"
#include <iostream>
#include <math.h>

using namespace std;

TerceiraLista::TerceiraLista() {
}

TerceiraLista::TerceiraLista(const TerceiraLista& orig) {
}

TerceiraLista::~TerceiraLista() {
}

void TerceiraLista::LerIdade(){
    int ano, mes, dia, result;
    cout << "Informe quantos anos você tem: ";
    cin >> ano;
    cout << "Informe quantos meses você tem: ";
    cin >> mes;
    cout << "Informe quantos dias você tem:";
    cin >> dia;
    ano = ano*365;
    mes = mes*30;
    result = ano+mes+dia;
    
    cout << "Sua idade em dias é: " << result;
    
}