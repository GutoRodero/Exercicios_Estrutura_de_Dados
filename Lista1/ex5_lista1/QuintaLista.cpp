/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   QuintaLista.cpp
 * Author: Usuario
 * 
 * Created on 22 de agosto de 2022, 14:39
 */
#include "QuintaLista.h"
#include <iostream>
#include <math.h>

using namespace std;

QuintaLista::QuintaLista() {
}

QuintaLista::QuintaLista(const QuintaLista& orig) {
}

QuintaLista::~QuintaLista() {
}

float QuintaLista::LerNota() {
    float media, n1, n2, n3;
    cout << "Informe a 1º nota: ";
    cin >> n1;
    cout << "Informe a 2º nota: ";
    cin >> n2;
    cout << "Informe a 3º nota: ";
    cin >> n3;
    n1 = n1 * 0.2;
    n2 = n2 * 0.3;
    n3 = n3 * 0.5;
    media = n1 + n2 + n3;
    cout << "A média do aluno é: " << media;
}