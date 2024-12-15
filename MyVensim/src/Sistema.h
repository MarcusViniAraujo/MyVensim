#ifndef SISTEMA_H
#define SISTEMA_H

#include <string>
#include <iostream>

using namespace std;

class Sistema{
private:
    string nome;
    double valor;

public:
    
    Sistema(string name = "", double val = 0);

    Sistema(const Sistema& aux);

    ~Sistema();

    void setNome(string name);

    void setValor(double val);

    string getNome();

    double getValor();

};


#endif