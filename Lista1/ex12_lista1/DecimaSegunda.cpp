/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   DecimaSegunda.cpp
 * Author: Usuario
 * 
 * Created on 26 de agosto de 2022, 16:20
 */

#include "DecimaSegunda.h"
#include <iostream>

using namespace std;

DecimaSegunda::DecimaSegunda() {
}

DecimaSegunda::DecimaSegunda(const DecimaSegunda& orig) {
}

DecimaSegunda::~DecimaSegunda() {
}

void DecimaSegunda::lerDados() {
    int idade;

    cout << "Informe a idade do nadador: ";
    cin >> idade;

    if (idade >= 5 && idade <= 7) {
        cout << "O nadador está na categoria Infantil A";
    } else
        if (idade >= 8 && idade <= 10) {
        cout << "O nadador está na categoria Infantil B";
    } else
        if (idade >= 11 && idade <= 13) {
        cout << "O nadador está na categoria Juvenil A";
    } else
        if (idade >= 14 && idade <= 17) {
        cout << "O nadador está na categoria Juvenil B";
    } else
        if (idade >= 18) {
        cout << "O nadador está na categoria Adulto";
    }
}