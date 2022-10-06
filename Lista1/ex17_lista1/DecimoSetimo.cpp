/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   DecimoSetimo.cpp
 * Author: Usuario
 * 
 * Created on 28 de agosto de 2022, 15:47
 */

#include "DecimoSetimo.h"
#include <iostream>

using namespace std;

DecimoSetimo::DecimoSetimo() {
}

DecimoSetimo::DecimoSetimo(const DecimoSetimo& orig) {
}

DecimoSetimo::~DecimoSetimo() {
}

void DecimoSetimo::LerDados() {
    float h;
    float ideal=0;
    char s;

    cout << "Informe seu sexo (H - homem M - Mulher): ";
    cin >> s;

    cout << "Informe sua altura: ";
    cin >> h;

    if (s == 'H') {
        ideal = (72.7 * h) - 58;
        cout << "O peso ideal é: " << ideal;
    } else
        if (s == 'S') {
        ideal = (62.1 * h) - 44.7;
        cout << "O peso ideal é: " << ideal;
    }
}