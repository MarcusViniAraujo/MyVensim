#include "Fluxo.h"

Fluxo::Fluxo(string name, string org, string dest, double v) 
    : nome(name), origem(org), destino(dest), valor(v) {}

Fluxo::Fluxo(const Fluxo& aux) 
    : nome(aux.nome), origem(aux.origem), destino(aux.destino), valor(aux.valor) {}

Fluxo::~Fluxo() {}

bool Fluxo::operator==(const Fluxo& other) const {
    return nome == other.nome && origem == other.origem && destino == other.destino && valor == other.valor;
}

void Fluxo::setOrg(string org) {
    origem = org;
}

void Fluxo::setDest(string dest) {
    destino = dest;
}

string Fluxo::getOrg() {
    return origem;
}

string Fluxo::getDest() {
    return destino;
}

void Fluxo::setValor(double v) {
    valor = v;
}

double Fluxo::getValor() {
    return valor;
}

void Fluxo::setNome(string name) {
    nome = name;
}

string Fluxo::getNome() {
    return nome;
}
