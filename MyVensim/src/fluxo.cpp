#include "Fluxo.h"

Fluxo::Fluxo(Sistema org = Sistema(), Sistema dest = Sistema(), double v = 0){
    origem = org;
    destino = dest;
    valor = v;
}

Fluxo::Fluxo(const Fluxo& aux){
    origem = aux.origem;
    destino = aux.destino;
    valor = aux.valor;
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

void Fluxo::setValor(double v){
    valor = v;
};

double Fluxo::getValor(){
    return valor;
};

void Fluxo::fluxoExponencial(){
    valor = origem.getValor() * 0.01;
    origem.setValor(origem.getValor() - valor);
    destino.setValor(destino.getValor() + valor);   
}

void Fluxo::fluxoLogistic(){
    valor = 0.01 * destino.getValor() * (1 - destino.getValor() / 70);
    origem.setValor(origem.getValor() - valor);
    destino.setValor(destino.getValor() + valor); 
};

