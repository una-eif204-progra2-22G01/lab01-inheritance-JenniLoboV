//
// Created by Jennifer Lobo on 19/3/2022.
//

#ifndef LAB01_INHERITANCE_JENNILOBOV_FIGURA_H
#define LAB01_INHERITANCE_JENNILOBOV_FIGURA_H


class Figura {
protected:
    string nombre;
public:
    Figura();
    Figura(string);
    virtual ~Figura();

    void setNombre(string);
    string getNombre();

    /*virtual double metodoVirPur();*/
    virtual string toString() = 0;
};


#endif //LAB01_INHERITANCE_JENNILOBOV_FIGURA_H
