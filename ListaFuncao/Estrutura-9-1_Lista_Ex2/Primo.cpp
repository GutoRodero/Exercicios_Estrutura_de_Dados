/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Primo.cpp
 * Author: marqu
 * 
 * Created on 7 de setembro de 2022, 10:59
 */

#include "Primo.h"
#include <iostream>

using namespace std;

Primo::Primo() {
}

Primo::Primo(const Primo& orig) {
}

Primo::~Primo() {
}

void Primo::lernum() {
    int num;
    cout << "Digite um numero para verificar se e primo: ";
    cin >> num;

    this->verifica_primo(num);

}

void Primo::verifica_primo(int num) {
    int i;
    for (i = (num - 1); i > 1; i--) {
        if ((num % i) == 0) {
            cout << "\nO numero nao é primo\n";
            break;
        }
    }
    if (i == 1) {
        cout << "\nO numero é primo\n";
    }
}

