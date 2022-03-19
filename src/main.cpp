//
// Created by Jennifer Lobo on 19/3/2022.
//
#include<iostream>
#include <sstream>
#include"Cuadrado.h"
#include"Figura.h"
using namespace std;

int main (int argc, char *argv[]) {

    Figura* ptrC1 = nullptr;
    Figura* ptrC2 = nullptr;

    ptrC1 = new Cuadrado("Cuadrado", 15);
    ptrC2 = new Cuadrado("Cuadrado", 20);



    return 0;
}
