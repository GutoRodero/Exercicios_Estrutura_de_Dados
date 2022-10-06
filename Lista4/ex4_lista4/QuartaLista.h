/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   QuartaLista.h
 * Author: aluno
 *
 * Created on 25 de agosto de 2022, 09:23
 */

#ifndef QUARTALISTA_H
#define QUARTALISTA_H

class QuartaLista {
public:
    QuartaLista();
    QuartaLista(const QuartaLista& orig);
    virtual ~QuartaLista();
    
    void LerDados();
    float Calcular(int a, int b, int c);
private:

};

#endif /* QUARTALISTA_H */

