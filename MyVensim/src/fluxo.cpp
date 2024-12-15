#include "Fluxo.h"

Fluxo::Fluxo(string name, Sistema org, Sistema dest, double v){
    nome = name;
    origem = org;
    destino = dest;
    valor = v;
}

Fluxo::Fluxo(const Fluxo& aux){
    nome = aux.nome;
    origem = aux.origem;
    destino = aux.destino;
    valor = aux.valor;
}

Fluxo::~Fluxo(){};

bool Fluxo::operator==(const Fluxo& other) const{
    return nome == other.nome && origem == other.origem && destino == other.destino && valor == other.valor;
}


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
    cout << "valor:" << valor << "\n";
    origem.setValor(origem.getValor() - valor);
    destino.setValor(destino.getValor() + valor);   
}

void Fluxo::fluxoLogistic(){
    valor = 0.01 * destino.getValor() * (1 - destino.getValor() / 70);
    cout << "valor:" << valor << "\n";
    origem.setValor(origem.getValor() - valor);
    destino.setValor(destino.getValor() + valor); 
};

void Fluxo::setNome(string name){
    nome = name;
}

string Fluxo::getNome(){
    return nome;
}

