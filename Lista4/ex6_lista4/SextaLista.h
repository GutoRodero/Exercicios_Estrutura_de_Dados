/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   SextaLista.h
 * Author: aluno
 *
 * Created on 25 de agosto de 2022, 10:39
 */

#ifndef SEXTALISTA_H
#define SEXTALISTA_H

class SextaLista {
public:
    SextaLista();
    SextaLista(const SextaLista& orig);
    virtual ~SextaLista();
    
    void LerDados();
    float Calcular(int a, int b, int c);
private:

};

#endif /* SEXTALISTA_H */

