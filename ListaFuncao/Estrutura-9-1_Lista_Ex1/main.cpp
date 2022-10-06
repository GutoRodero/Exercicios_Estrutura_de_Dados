/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: marqu
 *
 * Created on 7 de setembro de 2022, 10:33
 */

#include <cstdlib>

#include "Votos.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Votos votos;
    
    votos.lervotos();
    votos.resultado();

    return 0;
}

