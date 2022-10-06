/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   MaiorMenor.h
 * Author: marqu
 *
 * Created on 1 de setembro de 2022, 09:28
 */

#ifndef MAIORMENOR_H
#define MAIORMENOR_H

class MaiorMenor {
public:
    MaiorMenor();
    MaiorMenor(const MaiorMenor& orig);
    virtual ~MaiorMenor();
    
    void lerdados ();
    float maior (float alt, float maiornumero);
    float menor (float alt, float menornumero);

private:

};

#endif /* MAIORMENOR_H */

