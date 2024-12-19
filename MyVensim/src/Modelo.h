#ifndef MODELO_H
#define MODELO_H

#include <string>
#include <iostream>
#include <list>
#include <algorithm> 
#include "Sistema.h"
#include "Fluxo.h"
#include "FluxoExponencial.h"
#include "FluxoLogistico.h"

using namespace std;

class Modelo {
private:
    list<Sistema> sistemas;  
    list<Fluxo*> fluxos;     

public:
    Modelo();                                 

    Modelo(const list<Sistema>& sist, const list<Fluxo*>& flux); 

    Modelo(const Modelo& mod);               

    ~Modelo();                                

    void adicionar(const Sistema& sistema); 

    void remover(const Sistema& sistema);   

    void adicionar(Fluxo* fluxo);           

    void remover(Fluxo* fluxo);              

    void execModelo();                       

    void imprimiSistemas();
};
#endif
