/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: aluno
 *
 * Created on 18 de agosto de 2022, 08:37
 */

#include <cstdlib>
#include "PrimeiraLista.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

     PrimeiraLista obj;
    //primeiraLista *obj = primeiraLista();
    obj.LerDados();
    obj.calcDistEucli();

    return 0;
}

