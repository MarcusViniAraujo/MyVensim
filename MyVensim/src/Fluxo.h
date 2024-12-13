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

public:
    Fluxo(Sistema org = Sistema(), Sistema dest = Sistema());

    Fluxo(const Fluxo& aux);

    ~Fluxo();

    void setOrg(Sistema org);

    void setDest(Sistema dest);

    Sistema getOrg();

    Sistema getDest();

};

#endif