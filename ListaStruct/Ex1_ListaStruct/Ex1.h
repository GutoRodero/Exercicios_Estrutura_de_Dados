/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Ex1.h
 * Author: Usuario
 *
 * Created on 10 de setembro de 2022, 17:13
 */

#ifndef EX1_H
#define EX1_H

#include<string>

using namespace std;

struct cadastro{
    char nome[20];
    int matricula, n1, n2;
    float m;
};
class Ex1 {
public:
    
    Ex1();
    Ex1(const Ex1& orig);
    virtual ~Ex1();
    
    void leitura();
    float media (cadastro estrutura[], int n);
private:

};

#endif /* EX1_H */