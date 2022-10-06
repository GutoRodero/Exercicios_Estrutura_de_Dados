/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   QuintaLista.h
 * Author: aluno
 *
 * Created on 25 de agosto de 2022, 10:26
 */

#ifndef QUINTALISTA_H
#define QUINTALISTA_H

class QuintaLista {
public:
    QuintaLista();
    QuintaLista(const QuintaLista& orig);
    virtual ~QuintaLista();
    
    void LerDados();
    float Calcular(int raio);
private:

};

#endif /* QUINTALISTA_H */

