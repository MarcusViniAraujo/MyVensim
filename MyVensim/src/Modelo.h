#ifndef MODELO_H
#define MODELO_H

#include <string>
#include <iostream>
#include <list>
#include <algorithm> 
#include "Sistema.h"
#include "Fluxo.h"

using namespace std;

class Modelo {
private:
    list<Sistema> sistemas;
    list<Fluxo> fluxos;
    int operacao;

public:    

    Modelo();

    Modelo(const list<Sistema>& sist, const list<Fluxo>& flux, int op = -1);

    Modelo(const Modelo& mod);

    ~Modelo();

    void adicionarSistema(const Sistema& sistema);  

    void removerSistema(const Sistema& sistema); 

    void adicionarFluxo(const Fluxo& fluxo); 

    void removerFluxo(const Fluxo& fluxo); 

    void setOperacao(int op);

    int getoperacao();

    void execModelo();

    void imprimiSistemas();
    
};

#endif
