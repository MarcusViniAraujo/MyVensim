#include "Modelo.h"


Modelo::Modelo(const list<Sistema>& sist, const list<Fluxo>& flux){
    sistemas = sist;
    fluxos = flux;

};

Modelo::Modelo(const Modelo& mod){
    sistemas= mod.sistemas;
    fluxos = mod.fluxos;

};

void Modelo::adicionarSistema(const Sistema& sistema){
    sistemas.push_back(sistema);

};  

void Modelo::removerSistema(const Sistema& sistema){
    sistemas.remove(sistema);
}; 

void Modelo::adicionarFluxo(const Fluxo& fluxo){
    fluxos.push_back(fluxo);
}; 

void Modelo::removerFluxo(const Fluxo& fluxo){
    fluxos.remove(fluxo);
}; 

void Modelo::execModelo(){

};
