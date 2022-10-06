/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   SegundaLista.h
 * Author: aluno
 *
 * Created on 18 de agosto de 2022, 09:10
 */

#ifndef SEGUNDALISTA_H
#define SEGUNDALISTA_H

class SegundaLista {
public:
    SegundaLista();
    SegundaLista(const SegundaLista& orig);
    virtual ~SegundaLista();
    float d, r, s;
    
    void lerValores();
    float Conta();
private:

};

#endif /* SEGUNDALISTA_H */

