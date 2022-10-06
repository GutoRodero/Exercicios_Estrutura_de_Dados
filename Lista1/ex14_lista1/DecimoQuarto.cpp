/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   DecimoQuarto.cpp
 * Author: Usuario
 * 
 * Created on 26 de agosto de 2022, 16:44
 */

#include "DecimoQuarto.h"
#include <iostream>

using namespace std;

DecimoQuarto::DecimoQuarto() {
}

DecimoQuarto::DecimoQuarto(const DecimoQuarto& orig) {
}

DecimoQuarto::~DecimoQuarto() {
}

void DecimoQuarto::LerDados() {
    int n1, n2, n3;
    float media;

    cout << "Informe a 1º nota: ";
    cin >> n1;
    cout << "Informe a 2º nota: ";
    cin >> n2;
    cout << "Informe a 3º nota: ";
    cin >> n3;

    if (n1 > n2 && n1 > n3) {
        media = (n1 * 0.4)+(n2 * 0.3)+(n3 * .03);
    } else
        if (n2 > n1 && n2 > n3) {
        media = (n2 * 0.4)+(n1 * 0.3)+(n3 * .03);
    } else
        if (n3 > n1 && n3 > n2) {
        media = (n3 * 0.4)+(n1 * 0.3)+(n2 * .03);
    }
    
    cout << "\nNota 1: " << n1 << "\nNota 2: " << n2 << "\nNota 3: " << n3 << "\nMedia: " << media << endl;
    if (media>5){
        cout << "Aluno Aprovado!";
    }else
        cout << "Aluno Reprovado!";
    
       
    }