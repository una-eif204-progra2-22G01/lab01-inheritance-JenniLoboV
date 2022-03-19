//
// Created by Jennifer Lobo on 19/3/2022.
//

#include "Figura.h"
Figura::~Figura(){}
Figura::Figura(){
    nombre="";
    ladoBase=0;
}
Figura::Figura(string nombre, double ladoBase){
    this->nombre=nombre;
    this->ladoBase=ladoBase;
}

void Figura::setNombre(string nombre){
    this->nombre=nombre;
}
string Figura::getNombre(){
    return nombre;
}
void Figura::setLadoBasa(double ladoBase){
    this->ladoBase=ladoBase;
}
double Figura::getLadoBase(){
    return ladoBase;
}