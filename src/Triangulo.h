//
// Created by Jennifer Lobo on 19/3/2022.
//

#ifndef LAB01_INHERITANCE_JENNILOBOV_TRIANGULO_H
#define LAB01_INHERITANCE_JENNILOBOV_TRIANGULO_H

#include<iostream>
#include <sstream>
using namespace std;
#include "Figura.h"

//Clase Derivada2
class Triangulo: public Figura{
public:
    double altura;
public:
    virtual~Triangulo();
    Triangulo();
    Triangulo(string, double, double);

    void setAltura(double);
    double getAltura();

    double calculoArea();
    string toString();
};


#endif //LAB01_INHERITANCE_JENNILOBOV_TRIANGULO_H
