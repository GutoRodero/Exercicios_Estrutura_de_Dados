/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Fibonacci.h
 * Author: marqu
 *
 * Created on 9 de setembro de 2022, 15:22
 */

#ifndef FIBONACCI_H
#define FIBONACCI_H

class Fibonacci {
public:
    Fibonacci();
    Fibonacci(const Fibonacci& orig);
    virtual ~Fibonacci();
    void fibo ();
    void imprimir ();
    
private:
    int vetF[20];

};

#endif /* FIBONACCI_H */

