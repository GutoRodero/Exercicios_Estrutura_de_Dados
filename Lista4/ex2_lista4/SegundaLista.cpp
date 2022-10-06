/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   SegundaLista.cpp
 * Author: aluno
 * 
 * Created on 25 de agosto de 2022, 08:48
 */

#include "SegundaLista.h"
#include <iostream>

using namespace std;

SegundaLista::SegundaLista() {
}

SegundaLista::SegundaLista(const SegundaLista& orig) {
}

SegundaLista::~SegundaLista() {
}

void SegundaLista::LerNotas() {
    int n1=0, n2=0, n3=0;
    char opc;
    float conta;
    
    cout << "Informe a primeira nota: ";
    cin >> n1;
    cout << "Informe a segunda nota: ";
    cin >> n2;
    cout << "Informe a terceira nota: ";
    cin >> n3;

    cout << "Informe se a Média será aritmética(A) ou Média Ponderada(P)";
    cin >> opc;

    
    if (opc == 'A') {
        conta = Media(n1, n2, n3);
        cout << conta;
    } else 
    if (opc == 'P'){
        conta = Mediap(n1, n2, n3);
        cout << conta;
    }
}

float SegundaLista::Media(int n1, int n2, int n3) {
    float media=0;

    media = (n1 + n2 + n3) / 3;
    cout << "\nA média é: " << media;
}

float SegundaLista::Mediap(int n1, int n2, int n3) {
    float media=0;

    media = (n1 * 0.5)+(n2 * 0.3)+(n3 * 0.2);
    cout << "\nA média é: " << media;
}