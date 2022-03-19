//
// Created by Jennifer Lobo on 19/3/2022.
//
#include<iostream>
#include <sstream>
#include"Cuadrado.h"
#include"Figura.h"
#include"Triangulo.h"
using namespace std;
int main (int argc, char *argv[]) {

    Figura* ptrC1 = nullptr;
    Figura* ptrC2 = nullptr;
    Figura* ptrT1 = nullptr;
    Figura* ptrT2 = nullptr;

    ptrC1 = new Cuadrado("Cuadrado 1", 10);
    ptrC2 = new Cuadrado("Cuadrado 2", 35);
    ptrT1 = new Triangulo("Triangulo 1", 27, 57);
    ptrT2 = new Triangulo("Triangulo 2", 35, 40);
    system("cls");
    system("pause");

    cout<<ptrC1->toString()<<endl;
    cout<<ptrC2->toString()<<endl;
    cout<<ptrT1->toString()<<endl;
    cout<<ptrT2->toString()<<endl;

    return 0;
}
