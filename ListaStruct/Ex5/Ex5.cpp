/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Ex5.cpp
 * Author: Usuario
 * 
 * Created on 13 de setembro de 2022, 12:39
 */

#include "Ex5.h"
#include <iostream>

using namespace std;

Ex5::Ex5() {
}

Ex5::Ex5(const Ex5& orig) {
}

Ex5::~Ex5() {
}

void Ex5::LerDados() {
    int n = 3;
    int opc, cpf;
    float temp;
    cliente clientes[n];
    for (int i = 0; i < n; i++) {
        cout << "Digite o nome: ";
        cin >> clientes[i].nome;
        cout << "Digite o cpf: ";
        cin >> clientes[i].cpf;
        cout << "Digite um valor inicial para ser depositado: ";
        cin >> clientes[i].valor;
    }

    while (opc != 0) {
        cout << "Deseja realizar um Saque(1), Depósito(2) ou sair(0)?";
        cin >> opc;

        switch (opc) {
            case 1:
                cout << "Digite o CPF da conta para sacar: ";
                cin >> cpf;
                for (int i = 0; i < n; i++) {
                    if (cpf == clientes[i].cpf) {
                        cout << "Informe a quantidade a ser sacada: ";
                        cin >> temp;
                        clientes[i].valor = clientes[i].valor - temp;
                        cout << "Nome do titular: " << clientes[i].nome;
                        cout << "Valor restante na conta: " << clientes[i].valor << endl;
                    }
                }
                break;
            case 2:
                cout << "Digite o CPF da conta para depositar: ";
                cin >> cpf;
                for (int i = 0; i < n; i++) {
                    if (cpf == clientes[i].cpf) {
                        cout << "Informe a quantidade a ser depositada: ";
                        cin >> temp;
                        clientes[i].valor = clientes[i].valor + temp;
                        cout << "Nome do titular: " << clientes[i].nome << endl;
                        cout << "Valor restante na conta: " << clientes[i].valor << endl << endl;
                    }
                }
                break;
            default:
                break;
        }
    }
}