/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   QuartaLista.cpp
 * Author: Usuario
 * 
 * Created on 20 de agosto de 2022, 16:07
 */

#include "QuartaLista.h"
#include <iostream>
#include <math.h>

using namespace std;

QuartaLista::QuartaLista() {
}

QuartaLista::QuartaLista(const QuartaLista& orig) {
}

QuartaLista::~QuartaLista() {
}

void QuartaLista::LerIdade(){
    int dias;
    cout << "Informe sua idade em dias: ";
    cin >> dias;
    cout << "Você tem " << dias/365 << " anos, " << (dias%365)/30 << " meses e " << ((dias%365)%30) << " dias";   
}