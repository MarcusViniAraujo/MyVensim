#ifndef FLUXO_H
#define FLUXO_H
#include <string>
#include <iostream>
#include "Sistema.h"


using namespace std;

class Fluxo{
private:
    string nome;
    string origem;
    string destino;
    double valor;
    
public:
    Fluxo(string name = "", string org = "", string dest = "", double v = 0);

    Fluxo(const Fluxo& aux);

    ~Fluxo();

    bool operator==(const Fluxo& other) const;

    void setOrg(string org);

    void setDest(string dest);

    string getOrg();

    string getDest();

    void setValor(double v);

    double getValor();

    void fluxoExponencial(Sistema& org, Sistema& dest);

    void fluxoLogistic(Sistema& org, Sistema& dest);

    void setNome(string name);

    string getNome();

    

};

#endif