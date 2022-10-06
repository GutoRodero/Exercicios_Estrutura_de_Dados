/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Ex4.cpp
 * Author: Usuario
 * 
 * Created on 12 de setembro de 2022, 13:29
 */

#include "Ex4.h"
#include <iostream>

using namespace std;

Ex4::Ex4() {
}

Ex4::Ex4(const Ex4& orig) {
}

Ex4::~Ex4() {
}

void Ex4::lerDados() {
    int n, x, temp;

    cout << "Informe quantos produtos irá registrar: ";
    cin >> n;

    produto produtos[n];


    for (int i = 0; i < n; i++) {
        cout << "Digite nome: ";
        cin >> produtos[i].nome;
        cout << "Digite o código: ";
        cin >> produtos[i].cod;
        cout << "Digite o preço: ";
        cin >> produtos[i].preco;
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << "Nome: " <<produtos[i].nome << endl
         << "Código: "<<produtos[i].cod << endl
         << "Preço: "<<produtos[i].preco << endl << endl;
    }

    cout << endl;


    cout << "Digite um código a ser pesquisado: ";
    cin >> temp;
    cout << this->pesquisa(produtos, n, temp);
}

float Ex4::pesquisa(produto produtos[], int n, int temp) {


    for (int i = 0; i < n; i++) {
        if (temp == produtos[i].cod) {
            return produtos[i].preco;
        }
    }
}