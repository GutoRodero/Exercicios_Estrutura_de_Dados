/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   DecimaLista.cpp
 * Author: Usuario
 * 
 * Created on 23 de agosto de 2022, 19:59
 */

#include "DecimaLista.h"
#include <iostream>

using namespace std;

DecimaLista::DecimaLista() {
}

DecimaLista::DecimaLista(const DecimaLista& orig) {
}

DecimaLista::~DecimaLista() {
}

void DecimaLista::LerDados() {
    int a, b, c;

    cout << "Informe o valor de a: ";
    cin >> a;
    cout << "Informe o valor de b: ";
    cin >> b;
    cout << "Informe o valor de c: ";
    cin >> c;

    if (a > b & a > c) {
        cout << "A é o maior valor";
    } else
        if (b > a & b > c) {
        cout << "B é o maior valor";
    } else
        if (c > b & c > a) {
        cout << "C é o maior valor";
    }
}