#include "Sistema.h"

Sistema::Sistema(string name = "", double val = 0){
    nome = name;
    valor = val;
}
Sistema::Sistema(const Sistema& aux){
    nome = aux.nome;
    valor = aux.valor;
}

Sistema::~Sistema(){}

void Sistema::setNome(string name){
    nome = name;
}

void Sistema::setValor(double val){
    valor = val;
}

string Sistema::getNome(){
    return nome;
}

double Sistema::getValor(){
    return valor;
}
