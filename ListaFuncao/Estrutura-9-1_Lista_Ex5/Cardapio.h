/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Cardapio.h
 * Author: marqu
 *
 * Created on 9 de setembro de 2022, 15:37
 */

#ifndef CARDAPIO_H
#define CARDAPIO_H

class Cardapio {
public:
    Cardapio();
    Cardapio(const Cardapio& orig);
    virtual ~Cardapio();
    
    void retornar_valor ();
    float calc(int);
    void mostrar();
private:

};

#endif /* CARDAPIO_H */

