//
// Created by Jennifer Lobo on 19/3/2022.
//

#include "Figura.h"
Figura::Figura(){
    nombre="";
}
Figura::Figura(string nombre){
    this->nombre=nombre;
}
Figura::~Figura(){
    cout<<"Destructor Figura"<<endl;
}

void Figura::setNombre(string nombre){
    this->nombre=nombre;
}
string Figura::getNombre(){
    return nombre;
}