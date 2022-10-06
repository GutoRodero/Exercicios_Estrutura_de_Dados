/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Ex2.cpp
 * Author: Usuario
 * 
 * Created on 11 de setembro de 2022, 15:34
 */

#include "Ex2.h"
#include <iostream>

using namespace std;

Ex2::Ex2() {
}

Ex2::Ex2(const Ex2& orig) {
}

Ex2::~Ex2() {
}

void Ex2::lerDados() {
    int x, n, temp;
    cadastro estrutura[n];
    cout << "Informe quantas pessoas irá registrar: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Digite o nome: ";
        cin >> estrutura[i].nome;
        cout << "Digite o sexo (M ou F):  ";
        cin >> estrutura[i].sexo;
        cout << "Digite o CPF: ";
        cin >> estrutura[i].cpf;
        cout << "Digite o peso: ";
        cin >> estrutura[i].peso;
        cout << "Digite a altura: ";
        cin >> estrutura[i].altura;
    }
    
    cout << "Informe o CPF da pessoa: ";
    cin >> temp;
    
    cout << this->imc(estrutura, n, temp);

}

float Ex2::imc(cadastro estrutura[], int n, int temp) {


    for (int i = 0; i < n; i++) {
        if (temp == estrutura[i].cpf) {
            return estrutura[i].peso / (estrutura[i].altura * estrutura[i].altura);
        }
    }
}