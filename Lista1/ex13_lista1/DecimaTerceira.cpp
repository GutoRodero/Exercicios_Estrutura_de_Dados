/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   DecimaTerceira.cpp
 * Author: Usuario
 * 
 * Created on 26 de agosto de 2022, 16:28
 */

#include "DecimaTerceira.h"
#include <iostream>

using namespace std;

DecimaTerceira::DecimaTerceira() {
}

DecimaTerceira::DecimaTerceira(const DecimaTerceira& orig) {
}

DecimaTerceira::~DecimaTerceira() {
}

void DecimaTerceira::LerDados() {
    int n1, n2, n3;

    cout << "Informe o 1º valor: ";
    cin >> n1;
    cout << "Informe o 2º valor: ";
    cin >> n2;
    cout << "Informe o 3º valor: ";
    cin >> n3;

    if (n1 > n2 & n1 > n3) {
        cout << "O primeiro valor é o maior";
    } else
        if (n2 > n1 & n2 > n3) {
        cout << "O segundo valor é o maior";
    } else
        if (n3 > n2 & n3 > n1) {
        cout << "O terceiro valor é o maior";
    }
}