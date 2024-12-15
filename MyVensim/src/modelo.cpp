#include "Modelo.h"

Modelo::Modelo() {};

Modelo::Modelo(const list<Sistema>& sist , const list<Fluxo>& flux, int op){
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
    if(operacao == 0){
        for(int i = 0; i < 100; i++){
            for(list<Fluxo>::iterator it = fluxos.begin(); it != fluxos.end(); ++it){
                Fluxo aux  = *it;
                aux.fluxoExponencial();
                cout << "Fluxo: " << aux.getNome() 
                    << "\tvalor " << aux.getOrg().getNome() << ": " << aux.getOrg().getValor()
                    << "\tvalor " << aux.getDest().getNome() << ": " << aux.getDest().getValor() 
                    << endl;
            }
        }
    }
    else if(operacao == 1){
        for(int i = 0; i < 100; i++){
            for(list<Fluxo>::iterator it = fluxos.begin(); it != fluxos.end(); ++it){
                Fluxo aux  = *it;
                aux.fluxoLogistic();
                cout << "Fluxo: " << aux.getNome() 
                    << "\tvalor " << aux.getOrg().getNome() << ": " << aux.getOrg().getValor()
                    << "\tvalor " << aux.getDest().getNome() << ": " << aux.getDest().getValor() 
                    << endl;
            }
        }
    }
    else{
        cout << "a operacao nao foi reconhecida";
    }
    

};
