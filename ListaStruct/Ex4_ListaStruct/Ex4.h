/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Ex4.h
 * Author: Usuario
 *
 * Created on 12 de setembro de 2022, 13:29
 */

#ifndef EX4_H
#define EX4_H

#include <string>

using namespace std;

struct produto{
    char nome[20];
    int cod;
    float preco;
};
class Ex4 {
public:
    Ex4();
    Ex4(const Ex4& orig);
    virtual ~Ex4();
    
    void lerDados();
    float pesquisa(produto produtos[], int n, int temp);
private:

};

#endif /* EX4_H */

