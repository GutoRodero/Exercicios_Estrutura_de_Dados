/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Primo.h
 * Author: marqu
 *
 * Created on 7 de setembro de 2022, 10:59
 */

#ifndef PRIMO_H
#define PRIMO_H

class Primo {
public:
    Primo();
    Primo(const Primo& orig);
    virtual ~Primo();
    void lernum ();
    void verifica_primo (int num);
private:
};

#endif /* PRIMO_H */

