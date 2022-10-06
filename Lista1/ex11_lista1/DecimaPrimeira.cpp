/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   DecimaPrimeira.cpp
 * Author: Usuario
 * 
 * Created on 26 de agosto de 2022, 16:04
 */

#include "DecimaPrimeira.h"
#include <iostream>

using namespace std;

DecimaPrimeira::DecimaPrimeira() {
}

DecimaPrimeira::DecimaPrimeira(const DecimaPrimeira& orig) {
}

DecimaPrimeira::~DecimaPrimeira() {
}

void DecimaPrimeira::LerDados() {
    cout << "Digite dois numeros: \n";
    cin >>this->a>>this->b;

    if (this->a % this->b == 0) {
        cout << this->a << " e multiplo de " << this->b << endl;
    }
    if (this->b % this->a == 0) {
        cout << this->b << " e multiplo de " << this->a;
    }

}