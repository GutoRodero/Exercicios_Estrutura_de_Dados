/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   MaiorMenor.cpp
 * Author: marqu
 * 
 * Created on 1 de setembro de 2022, 09:28
 */

#include "MaiorMenor.h"
#include <iostream>

using namespace std;

MaiorMenor::MaiorMenor() {
}

MaiorMenor::MaiorMenor(const MaiorMenor& orig) {
}

MaiorMenor::~MaiorMenor() {
}

void MaiorMenor::lerdados() {
    float alt, maiornumero, menornumero;

    for (int i = 0; i < 5; i++) {
        cout << "Digite a altura: ";
        cin >> alt;

        if (i == 0) {
            maiornumero = alt;
            menornumero = alt;
        }

        maiornumero = this->maior(alt, maiornumero);
        menornumero = this->menor(alt, menornumero);
        cout << "maior altura: " << maiornumero << "\nmenor altura: " << menornumero << endl;

    }
}

float MaiorMenor::maior(float alt, float maiornumero) {
    if (alt > maiornumero) {
        maiornumero = alt;

    }
    return maiornumero;
}

float MaiorMenor::menor(float alt, float menornumero) {
    if (alt < menornumero) {
        menornumero = alt;
    }
    return menornumero;
}