#ifndef FLUXO_H
#define FLUXO_H
#include <string>
#include <iostream>
#include "Sistema.h"


using namespace std;

class Fluxo{
private:
    Sistema origem;
    Sistema destino;
    double valor;
    
public:
    Fluxo(Sistema org = Sistema(), Sistema dest = Sistema(), double v = 0);

    Fluxo(const Fluxo& aux);

    ~Fluxo();

    void setOrg(Sistema org);

    void setDest(Sistema dest);

    Sistema getOrg();

    Sistema getDest();

    void setValor(double v);

    double getValor();

    void fluxoExponencial();

    void fluxoLogistic();



    

};

#endif