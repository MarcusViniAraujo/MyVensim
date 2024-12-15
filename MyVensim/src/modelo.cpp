#include "Modelo.h"

Modelo:: Modelo() {};

Modelo::Modelo(const list<Sistema>& sist , const list<Fluxo>& flux, int op = -1){
    sistemas = sist;
    fluxos = flux;
    operacao = op;
};

Modelo::Modelo(const Modelo& mod){
    sistemas= mod.sistemas;
    fluxos = mod.fluxos;
    operacao = mod.operacao;
};

Modelo::~Modelo() {};


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

void Modelo::setOperacao(int op){
    operacao = op;
};

int Modelo::getoperacao(){
    return operacao;
}


void Modelo::execModelo(){
    if(!operacao){
        for(int i = 0; i < 100; i++){
            for(list<Fluxo>::iterator it = fluxos.begin(); it != fluxos.end(); ++it){
                Fluxo aux  = *it;
                aux.fluxoExponencial();
            }
        }
    }
    else if(operacao){
        for(int i = 0; i < 100; i++){
            for(list<Fluxo>::iterator it = fluxos.begin(); it != fluxos.end(); ++it){
                Fluxo aux  = *it;
                aux.fluxoLogistic();
            }
        }
    }
    else{
        cout << "a operacao nao foi reconhecida";
    }
    

};
