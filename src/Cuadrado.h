//
// Created by Jennifer Lobo on 19/3/2022.
//

#ifndef LAB01_INHERITANCE_JENNILOBOV_CUADRADO_H
#define LAB01_INHERITANCE_JENNILOBOV_CUADRADO_H
#include<iostream>
#include <sstream>
using namespace std;
#include "Figura.h"
class Cuadrado: public Figura{
public:
    ~Cuadrado();
    Cuadrado();
    Cuadrado(string , double);

    double calculoArea();
    string toString();
};

#endif //LAB01_INHERITANCE_JENNILOBOV_CUADRADO_H
