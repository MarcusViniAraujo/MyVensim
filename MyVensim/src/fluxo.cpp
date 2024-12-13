#include "Fluxo.h"

Fluxo::Fluxo(Sistema org = Sistema(), Sistema dest = Sistema()){
    origem = org;
    destino = dest;
}

Fluxo::Fluxo(const Fluxo& aux){
    origem = aux.origem;
    destino = aux.destino;
}

Fluxo::~Fluxo(){};

void Fluxo::setOrg(Sistema org){
    origem = org;

}

void Fluxo::setDest(Sistema dest){
    destino = dest;
}

Sistema Fluxo::getOrg(){
    return origem;
}

Sistema Fluxo::getDest(){
    return destino;
}