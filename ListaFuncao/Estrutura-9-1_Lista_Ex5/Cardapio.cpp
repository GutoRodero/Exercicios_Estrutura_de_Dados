/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Cardapio.cpp
 * Author: marqu
 * 
 * Created on 9 de setembro de 2022, 15:37
 */

#include "Cardapio.h"
#include <iostream>

using namespace std;

Cardapio::Cardapio() {
}

Cardapio::Cardapio(const Cardapio& orig) {
}

Cardapio::~Cardapio() {
}

void Cardapio::mostrar() {
    cout << "Especificacao\tCodigo\tPreco\nCachorro quente\t100\t1.20\nBauru simples\t101\t1.30\nBauru com ovo\t102\t1.50";
    cout << "\nHamburguer\t103\t1.20\nCheeseburguer\t104\t1.30\nRefrigerante\t105\t1.00\nFinalizar\t0";

}

float Cardapio::calc(int codigo) {
    int qtd;
    float valorf;
    if (codigo == 0) {
        return 0;
    }
    cout << "\nDigite a quantidade: ";
    cin >> qtd;

    switch (codigo) {
        case 100:
            valorf = qtd * 1.20;
            break;
        case 101:
            valorf = qtd * 1.30;
            break;
        case 102:
            valorf = qtd * 1.50;
            break;
        case 103:
            valorf = qtd * 1.20;
            break;
        case 104:
            valorf = qtd * 1.30;
            break;
        case 105:
            valorf = qtd * 1.00;
            break;


    }

    return valorf;


}

void Cardapio::retornar_valor() {
    int codigo = 1;
    float valorf = 0;

    while (codigo != 0) {

        this->mostrar();
        cout << "\n\nDigite o codigo do produto desejado: ";
        cin >>codigo;
        valorf = valorf + this->calc(codigo);
    }

    cout << "Valor final: " << valorf;
}