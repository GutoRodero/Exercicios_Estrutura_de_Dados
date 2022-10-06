/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Ex3.cpp
 * Author: Usuario
 * 
 * Created on 12 de setembro de 2022, 13:07
 */

#include "Ex3.h"
#include <iostream>

using namespace std;

Ex3::Ex3() {
}

Ex3::Ex3(const Ex3& orig) {
}

Ex3::~Ex3() {
}

void Ex3::cadPessoa() {
    int n, cpf, x;
    
    cout << "Informe quantas pessoas irá registrar: ";
    cin >> n;
    
    pessoa VetPessoas[n];
    

    for (int i = 0; i < n; i++) {
        cout << "Digite nome: ";
        cin>>VetPessoas[i].nome;
        cout << "Digite cpf: ";
        cin>>VetPessoas[i].cpf;
    }

    cout << endl;
    this->Bolha2(VetPessoas, n);
    
    cout << "Digite um CPF a ser pesquisado: ";
    cin >> cpf;
    x=this->pesquisaBinaria(VetPessoas, cpf, n);
    if(x == -1)
        cout << "CPF não encontrado";
    else
        cout << "Encontrado";
    cout << endl;
}

void Ex3::Bolha2(pessoa VetPessoas[], int n) {
    int i, j;
    int temp;
    bool troca = true;
    int z=0;

    for (i = n - 1; (i >= 1) && (troca == true); i--) {
        troca = false;
        for (j = 0; j < i; j++) {
            if (VetPessoas[j].cpf > VetPessoas[j + 1].cpf) {
                temp = VetPessoas[j].cpf;
                VetPessoas[j].cpf = VetPessoas[j + 1].cpf;
                VetPessoas[j + 1].cpf = temp;
                troca = true;
            }
            z++;
        }
    }
    cout << "Repetições: " << z << endl;
}
int Ex3::pesquisaBinaria(pessoa VetPessoas[], int chave, int n) {
    int inf, sup, meio;
    inf = 0;
    sup = n - 1;
    while (inf <= sup) {
        meio = (inf + sup) / 2;
        if (chave == VetPessoas[meio].cpf)
            return meio;
        else if (chave < VetPessoas[meio].cpf)
            sup = meio - 1;
        else
            inf = meio + 1;
    }
    return -1; /* não encontrado */
}