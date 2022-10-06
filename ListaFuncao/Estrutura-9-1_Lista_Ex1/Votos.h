/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Votos.h
 * Author: marqu
 *
 * Created on 7 de setembro de 2022, 10:33
 */

#ifndef VOTOS_H
#define VOTOS_H

class Votos {
public:
    Votos();
    Votos(const Votos& orig);
    virtual ~Votos();
    void lervotos ();
    void contarvotos (int voto);
    void resultado ();
private:
    int vot1, vot2, vot3, vot4, votN, votB;

};

#endif /* VOTOS_H */

