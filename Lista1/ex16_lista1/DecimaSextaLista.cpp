/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   DecimaSextaLista.cpp
 * Author: aluno
 * 
 * Created on 25 de agosto de 2022, 08:24
 */

#include "DecimaSextaLista.h"
#include <iostream>


using namespace std;

DecimaSextaLista::DecimaSextaLista() {
}

DecimaSextaLista::DecimaSextaLista(const DecimaSextaLista& orig) {
}

DecimaSextaLista::~DecimaSextaLista() {
}

void DecimaSextaLista::LerDados() {
    int codProduto = 0, qtdeProduto;
    char opcao;

    float conta;

    while (opcao != 's') {
        cout << "Tabela de códigos - Produtos" << endl;
        cout << "Cachorro Quente - 100 - R$1,20";
        cout << "Bauru Simples - 101 - R$1,30";
        cout << "Bauru com ovo - 102 - R$1,50";
        cout << "Hambúrguer - 103 - R$1,20";
        cout << "Cheeseburguer - 104 - R$1,30";
        cout << "Refrigerante - 105 - R$1,00\n\n\n";
        cout << "Digite o código do produto: ";
        cin >> codProduto;

        cout << "Digite a quantidade desse produto: ";
        cin >> qtdeProduto;

        conta += CalcularConta(codProduto, qtdeProduto);

        cout << "Digite s para sair ou c para continuar";
        cin >> opcao;
    }
    cout << "Valor final da conta é: " << conta;
}

float DecimaSextaLista::CalcularConta(int codProduto, int qtdProduto) {

    float valorFinal;

    if (codProduto == 100) {
        valorFinal += 1.20 * qtdProduto;
    } else;

    if (codProduto == 101) {
        valorFinal += 1.30 * qtdProduto;
    } else;

    if (codProduto == 102) {
        valorFinal += 1.50 * qtdProduto;
    } else;

    if (codProduto == 103) {
        valorFinal += 1.20 * qtdProduto;
    } else;

    if (codProduto == 104) {
        valorFinal += 1.30 * qtdProduto;
    } else;
    
    if (codProduto == 105) {
        valorFinal += 1 * qtdProduto;
    }

    return valorFinal;
}