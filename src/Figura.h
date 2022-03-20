//
// Created by Jennifer Lobo on 19/3/2022.
//

#ifndef LAB01_INHERITANCE_JENNILOBOV_FIGURA_H
#define LAB01_INHERITANCE_JENNILOBOV_FIGURA_H
#include<iostream>
#include <sstream>
using namespace std;
//Clase Base
class Figura {
protected:
    string nombre;
    double ladoBase;
public:
    virtual ~Figura();
    Figura();
    Figura(string, double);

    void setNombre(string);
    string getNombre();
    void setLadoBasa(double);
    double getLadoBase();

    virtual string toString()=0;//Virtual Puro
};


#endif //LAB01_INHERITANCE_JENNILOBOV_FIGURA_H
