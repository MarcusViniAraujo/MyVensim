#include "Fluxo.h"

Fluxo::Fluxo(string name, string org, string dest, double v){
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


void Fluxo::setOrg(string org){
    origem = org;

}

void Fluxo::setDest(string dest){
    destino = dest;
}

string Fluxo::getOrg(){
    return origem;
}

string Fluxo::getDest(){
    return destino;
}

void Fluxo::setValor(double v){
    valor = v;
};

double Fluxo::getValor(){
    return valor;
};

void Fluxo::fluxoExponencial(Sistema& org, Sistema& dest){
    valor = org.getValor() * 0.01;  // Calcula o valor do fluxo
    //cout << "valor: " << valor << "\n";
    org.setValor(org.getValor() - valor);  // Diminui o valor de org
    dest.setValor(dest.getValor() + valor); // Aumenta o valor de dest
}

void Fluxo::fluxoLogistic(Sistema& org, Sistema& dest){
    valor = 0.01 * dest.getValor() * (1 - dest.getValor() / 70);  // Calcula o valor do fluxo logístico
    //cout << "valor: " << valor << "\n";
    org.setValor(org.getValor() - valor);  // Diminui o valor de origem
    dest.setValor(dest.getValor() + valor); // Aumenta o valor de destino
}

void Fluxo::setNome(string name){
    nome = name;
}

string Fluxo::getNome(){
    return nome;
}

