#ifndef FLUXO_H
#define FLUXO_H

#include <string>
#include "Sistema.h"

using namespace std;

class Fluxo {
protected:
    string nome;
    string origem;
    string destino;
    double valor;

public:
    Fluxo(string name = "", string org = "", string dest = "", double v = 0);
    Fluxo(const Fluxo& aux);
    virtual ~Fluxo();

    bool operator==(const Fluxo& other) const;

    virtual void calcular(Sistema& org, Sistema& dest) = 0; 

    void setOrg(string org);
    void setDest(string dest);
    string getOrg();
    string getDest();
    void setValor(double v);
    double getValor();
    void setNome(string name);
    string getNome();
};

#endif
