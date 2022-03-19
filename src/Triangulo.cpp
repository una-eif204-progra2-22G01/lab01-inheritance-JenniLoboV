//
// Created by Jennifer Lobo on 19/3/2022.
//

#include "Triangulo.h"
Triangulo::~Triangulo(){cout<<"~Triangulo()"<<endl;}
Triangulo::Triangulo(){
    altura=0;
    cout<<"Triangulo()"<<endl;
}
Triangulo::Triangulo(string nombre,double ladoBase, double altura):Figura(nombre, ladoBase){
    this->altura=altura;
    cout<<"Triangulo(Parametros)"<<endl;
}

void Triangulo::setAltura(double){
    this->altura=altura;
}
double Triangulo::getAltura(){
    return altura;
}
double Triangulo::calculoArea(){
    return (ladoBase+altura)/2;
}
string Triangulo::toString(){
    stringstream s;
    s<<" "<<nombre<<endl;
    s<<"Base: "<<getLadoBase()<<endl;
    s<<"Altura: "<<altura<<endl;
    return s.str();
}
