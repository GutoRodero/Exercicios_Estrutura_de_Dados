/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   SextaLista.cpp
 * Author: Usuario
 * 
 * Created on 22 de agosto de 2022, 15:21
 */

#include "SextaLista.h"
#include <iostream>
#include <math.h>

using namespace std;

SextaLista::SextaLista() {
}

SextaLista::SextaLista(const SextaLista& orig) {
}

SextaLista::~SextaLista() {
}


void SextaLista::LerDados(){
    int seg;
    cout << "Informe em segundos a duração do evento da fábrica: ";
    cin >> seg;
    
    cout << "O evento durou " << (seg/60)/60 << " horas, " << (seg/60)%60 << " minutos e " << ((seg%60)%60);
}