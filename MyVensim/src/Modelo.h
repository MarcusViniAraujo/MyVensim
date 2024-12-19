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
    list<Sistema> sistemas;  // Lista de sistemas
    list<Fluxo*> fluxos;     // Lista de ponteiros para Fluxo

public:
    Modelo();                                 // Construtor padrão

    Modelo(const list<Sistema>& sist, const list<Fluxo*>& flux); // Construtor parametrizado

    Modelo(const Modelo& mod);               // Construtor de cópia (cuidado com duplicação de ponteiros)

    ~Modelo();                                // Destrutor (libera memória dos fluxos)

    void adicionar(const Sistema& sistema);  // Adicionar sistema

    void remover(const Sistema& sistema);    // Remover sistema

    void adicionar(Fluxo* fluxo);            // Adicionar fluxo

    void remover(Fluxo* fluxo);              // Remover fluxo

    void execModelo();                       // Executar modelo

    void imprimiSistemas();
};
#endif
