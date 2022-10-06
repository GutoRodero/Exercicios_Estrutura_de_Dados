/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Votos.cpp
 * Author: marqu
 * 
 * Created on 7 de setembro de 2022, 10:33
 */

#include "Votos.h"
#include <iostream>

using namespace std;

Votos::Votos() {
}

Votos::Votos(const Votos& orig) {
}

Votos::~Votos() {
}

void Votos::lervotos() {
    this->vot1 = 0;
    this->vot2 = 0;
    this->vot3 = 0;
    this->vot4 = 0;
    this->votN = 0;
    this->votB = 0;
    int voto = 1;
    while (voto != 0) {
        cout << "Digite seu voto - candidatos 1, 2, 3, 4, 5(nulo), 6(branco), 0 para finalizar: ";
        cin >> voto;
        this->contarvotos(voto);
    }
}

void Votos::contarvotos(int voto) {
    switch (voto) {
        case 1:
            this->vot1++;
            break;
        case 2:
            this->vot2++;
            break;
        case 3:
            this->vot3++;
            break;
        case 4:
            this->vot4++;
            break;
        case 5:
            this->votN++;
            break;
        case 6:
            this->votB++;
            break;


    }

}

void Votos::resultado() {
    cout << "Resultado: \nCandidato 1: "
            << this->vot1 << "\nCandidato 2: "
            << this->vot2 << "\nCandidato 3: "
            << this->vot3 << "\nCandidato 4: "
            << this->vot4 << "\nNulos: "
            << this->votN << "\nBrancos: " << this->votB;
};

