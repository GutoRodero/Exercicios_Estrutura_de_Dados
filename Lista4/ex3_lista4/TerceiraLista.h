/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   TerceiraLista.h
 * Author: aluno
 *
 * Created on 25 de agosto de 2022, 09:12
 */

#ifndef TERCEIRALISTA_H
#define TERCEIRALISTA_H

class TerceiraLista {
public:
    TerceiraLista();
    TerceiraLista(const TerceiraLista& orig);
    virtual ~TerceiraLista();
    
    void LerNumero();
    void Verificar(int num);
private:

};

#endif /* TERCEIRALISTA_H */

