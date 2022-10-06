/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   DecimoNono.cpp
 * Author: Usuario
 * 
 * Created on 28 de agosto de 2022, 18:21
 */

#include "DecimoNono.h"
#include <iostream>

using namespace std;

DecimoNono::DecimoNono() {
}

DecimoNono::DecimoNono(const DecimoNono& orig) {
}

DecimoNono::~DecimoNono() {
}

void DecimoNono::LerDados() {
    int opc, n1, n2, n3;
    float media;

    cout << "Informe os 3 valores: \n";
    cin >> n1 >> n2 >> n3;

    cout << "Informe qual média usará\n 1 - Média aritmética\n 2 - Média Ponderada (3,3,4)\n 3 - Média Harmônica\n ";
    cin >> opc;

    switch (opc) {
        case 1:
            media = (n1 + n2 + n3) / 3;
            break;
        case 2:
            media = (n1 * 0.3)+(n2 * 0.3)+(n3 * 0.4);
            break;
        case 3:
            media = ((n1/1)+(n2/1)+(n3/1)) / 3;
            break;
    }
    cout << "A média é: " << media;
}