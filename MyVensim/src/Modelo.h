#ifndef MODELO_H
#define MODELO_H
#include <string>
#include <iostream>
#include <list>
#include "Sistema.h"
#include "Fluxo.h"

using namespace std;

class Modelo{
private:
    list<Sistema> sistemas;
    list<Fluxo> fluxos;
public:

    void adicionarSistema(const Sistema& sistema);  

    void removerSistema(const Sistema& sistema); 

    void adicionarFluxo(const Fluxo& fluxo); 

    void removerFluxo(const Fluxo& fluxo); 
};


#endif