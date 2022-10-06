/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Ex1.cpp
 * Author: Usuario
 * 
 * Created on 10 de setembro de 2022, 17:13
 */
using namespace std;

#include "Ex1.h"
#include <iostream>

Ex1::Ex1() {
}

Ex1::Ex1(const Ex1& orig) {
}

Ex1::~Ex1() {
}

void Ex1::leitura() {
    int n;
    cadastro estrutura[n];
    cout << "Informe quantos alunos irá registrar: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Digite o nome: ";
        cin >> estrutura[i].nome;
        cout << "Digite a matrícula: " ;
        cin >> estrutura[i].matricula;
        cout << "Digite a primeira nota: ";
        cin >> estrutura[i].n1;
        cout << "Digite a segunda nota: ";
        cin >> estrutura[i].n2;
    }
    this->media(estrutura, n);
    for (int i = 0; i < n; i++) {
        cout << endl << "Nome: " << estrutura[i].nome << endl << "Matricula: " << estrutura[i].matricula << endl << "Média: "
                << estrutura[i].m << endl << endl;
    }
}

float Ex1::media(cadastro estrutura[], int n) {
    for (int i = 0; i < n; i++) {
        estrutura[i].m = (estrutura[i].n1 + estrutura[i].n2)/2;
    }
}
