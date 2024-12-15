#ifndef FLUXO_H
#define FLUXO_H
#include <string>
#include <iostream>
#include "Sistema.h"


using namespace std;

class Fluxo{
private:
    string nome;
    Sistema origem;
    Sistema destino;
    double valor;
    
public:
    Fluxo(string name = "", Sistema org = Sistema(), Sistema dest = Sistema(), double v = 0);

    Fluxo(const Fluxo& aux);

    ~Fluxo();

    bool operator==(const Fluxo& other) const;

    void setOrg(Sistema org);

    void setDest(Sistema dest);

    Sistema getOrg();

    Sistema getDest();

    void setValor(double v);

    double getValor();

    void fluxoExponencial();

    void fluxoLogistic();

    void setNome(string name);

    string getNome();

    

};

#endif