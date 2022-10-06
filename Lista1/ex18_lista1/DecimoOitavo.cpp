/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   DecimoOitavo.cpp
 * Author: Usuario
 * 
 * Created on 28 de agosto de 2022, 16:03
 */

#include "DecimoOitavo.h"
#include <iostream>

using namespace std;
DecimoOitavo::DecimoOitavo() {
}

DecimoOitavo::DecimoOitavo(const DecimoOitavo& orig) {
}

DecimoOitavo::~DecimoOitavo() {
}

void DecimoOitavo::LerDados(){
    float saldo, credito;
    
    cout << "Informe o saldo médio no ano: ";
    cin >> saldo;
    
    if (saldo<=200){
        cout << "Seu saldo é: " << saldo << " e seu crédito é 0";
    } else
        if (saldo>200&&saldo<=400){
            credito=saldo*0.2;
        cout << "Seu saldo é: " << saldo << " e seu crédito é: " << credito;
    } else
        if (saldo>400&&saldo<=600){
            credito=saldo*0.3;
        cout << "Seu saldo é: " << saldo << " e seu crédito é: " << credito;
    } else
        if (saldo>600){
            credito=saldo*0.4;
        cout << "Seu saldo é: " << saldo << " e seu crédito é: " << credito;
    }
        
}