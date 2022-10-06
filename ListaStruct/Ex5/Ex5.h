/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Ex5.h
 * Author: Usuario
 *
 * Created on 13 de setembro de 2022, 12:39
 */

#ifndef EX5_H
#define EX5_H

using namespace std;

struct cliente{
    char nome[20];
    int cpf;
    float valor;
};
class Ex5 {
public:
    Ex5();
    Ex5(const Ex5& orig);
    virtual ~Ex5();
    
    void LerDados();
private:

};

#endif /* EX5_H */

