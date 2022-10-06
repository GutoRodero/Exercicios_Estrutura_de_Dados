/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Ex2.h
 * Author: Usuario
 *
 * Created on 11 de setembro de 2022, 15:34
 */

#ifndef EX2_H
#define EX2_H
#include<string>

using namespace std;

struct cadastro{
    char nome[20], sexo[1];
    int cpf;
    float peso, altura;
};
class Ex2 {
public:
    Ex2();
    Ex2(const Ex2& orig);
    virtual ~Ex2();
    
    
    void lerDados();
    float imc(cadastro estrutura[], int n, int temp);
private:

};

#endif /* EX2_H */

