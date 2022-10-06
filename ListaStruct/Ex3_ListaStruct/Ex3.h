/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Ex3.h
 * Author: Usuario
 *
 * Created on 12 de setembro de 2022, 13:07
 */

#ifndef EX3_H
#define EX3_H

#include<string>
using namespace std;

struct pessoa{
    char nome[20];
    int cpf;
};

class Ex3 {
public:
    Ex3();
    Ex3(const Ex3& orig);
    virtual ~Ex3();
    
    void cadPessoa();
    void Bolha2 (pessoa VetPessoas[], int n);
    int pesquisaBinaria(pessoa VetPessoas[], int chave, int n);
private:

};

#endif /* EX3_H */

