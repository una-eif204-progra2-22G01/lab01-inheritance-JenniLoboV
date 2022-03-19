//
// Created by Jennifer Lobo on 19/3/2022.
//

#include "Cuadrado.h"
Cuadrado::~Cuadrado(){cout<<"~Cuadrado()"<<endl;}
Cuadrado::Cuadrado(){cout<<"Cuadrado()"<<endl;}
Cuadrado::Cuadrado(string nombre, double alturaBase): Figura(nombre, alturaBase){cout<<"Cuadrado(Parametros)"<<endl;}

double Cuadrado::calculoArea(){
    return (ladoBase*4);
}
string Cuadrado::toString(){
    stringstream s;
    s<<" "<<nombre<<endl;
    s<<"Lado: "<<ladoBase;
    return s.str();
}
