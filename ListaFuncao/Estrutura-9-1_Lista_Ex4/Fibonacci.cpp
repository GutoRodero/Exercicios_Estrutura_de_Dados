/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Fibonacci.cpp
 * Author: marqu
 * 
 * Created on 9 de setembro de 2022, 15:22
 */

#include "Fibonacci.h"
#include <iostream>

using namespace std;

Fibonacci::Fibonacci() {
}

Fibonacci::Fibonacci(const Fibonacci& orig) {
}

Fibonacci::~Fibonacci() {
}

void Fibonacci::fibo() {
    int i;
    this->vetF[0] = 1;
    this->vetF[1] = 1;
    for (i = 2; i < 20; i++) {
        this->vetF[i] = this->vetF[i - 1] + this->vetF[i - 2];
    }

}

void Fibonacci::imprimir() {
    for (int i = 0; i < 20; i++) {
        cout << this->vetF[i] << endl;
    }
}
