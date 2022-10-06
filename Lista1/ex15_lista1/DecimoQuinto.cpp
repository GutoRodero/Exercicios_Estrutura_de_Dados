/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   DecimoQuinto.cpp
 * Author: Usuario
 * 
 * Created on 28 de agosto de 2022, 09:39
 */

#include "DecimoQuinto.h"
#include <iostream>

using namespace std;

DecimoQuinto::DecimoQuinto() {
}

DecimoQuinto::DecimoQuinto(const DecimoQuinto& orig) {
}

DecimoQuinto::~DecimoQuinto() {
}

void DecimoQuinto::LerDados() {
    int num;

    cout << "Informe um número: ";
    cin >> num;

    if (num % 2 == 1||num%2 == -1) {
        cout << "O número é impar!\n";
    } else
        cout << "O número é par!\n";


    if (num>=0){
        cout << "O valor é positivo!";
    } else
        cout << "O valor é negativo!";
}