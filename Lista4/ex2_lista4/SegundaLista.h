/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   SegundaLista.h
 * Author: aluno
 *
 * Created on 25 de agosto de 2022, 08:48
 */

#ifndef SEGUNDALISTA_H
#define SEGUNDALISTA_H

class SegundaLista {
public:
    SegundaLista();
    SegundaLista(const SegundaLista& orig);
    virtual ~SegundaLista();
    
    void LerNotas();
    float Media(int n1, int n2, int n3);
    float Mediap(int n1, int n2, int n3);
private:

};

#endif /* SEGUNDALISTA_H */

