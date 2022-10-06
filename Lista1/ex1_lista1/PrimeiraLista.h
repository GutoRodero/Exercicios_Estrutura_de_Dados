/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   PrimeiraLista.h
 * Author: aluno
 *
 * Created on 18 de agosto de 2022, 08:37
 */

#ifndef PRIMEIRALISTA_H
#define PRIMEIRALISTA_H

class PrimeiraLista {
public:
    PrimeiraLista(); //Método construtor
    PrimeiraLista(const PrimeiraLista& orig);
    virtual ~PrimeiraLista();
    
    int x1,x2,y1,y2;
    
    void LerDados();
    float calcDistEucli();
private:

};

#endif /* PRIMEIRALISTA_H */