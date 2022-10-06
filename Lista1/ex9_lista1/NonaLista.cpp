/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   NonaLista.cpp
 * Author: Usuario
 * 
 * Created on 23 de agosto de 2022, 19:48
 */

#include "NonaLista.h"
#include <iostream>
#include <math.h>

using namespace std;

NonaLista::NonaLista() {
}

NonaLista::NonaLista(const NonaLista& orig) {
}

NonaLista::~NonaLista() {
}

void NonaLista::LerNota(){
    float n1, n2, n3, media;
    
    cout << "Informe as 3 notas do aluno: ";
    cin >> n1 >> n2 >> n3;
    
    media = (n1+n2+n3)/3;
    
    if (media>=6){
        cout << "Aluno aprovado!!!";
    }else
    {
        cout << "Aluno reprovado!!!";
    }
}