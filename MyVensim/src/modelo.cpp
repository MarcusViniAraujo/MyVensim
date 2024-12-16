#include "Modelo.h"

Modelo::Modelo() {};

Modelo::Modelo(const list<Sistema>& sist , const list<Fluxo>& flux, int op){
    sistemas = sist;
    fluxos = flux;
    operacao = op;
};

Modelo::Modelo(const Modelo& mod)
    : sistemas(mod.sistemas), fluxos(mod.fluxos), operacao(mod.operacao) {}

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
    if(operacao == 0 || operacao == 1){
        for(int i = 0; i <= 100; i++){
            for(list<Fluxo>::iterator it = fluxos.begin(); it != fluxos.end(); ++it){
                Fluxo aux  = *it;
                string nome = aux.getOrg();

                list<Sistema>::iterator origem = std::find_if(sistemas.begin(), sistemas.end(), 
                    [nome](Sistema& s) { return s.getNome() == nome; });

                nome = aux.getDest();

                list<Sistema>::iterator destino = std::find_if(sistemas.begin(), sistemas.end(), 
                    [nome](Sistema& s) { return s.getNome() == nome; });

                if(operacao == 0){
                    aux.fluxoExponencial(*origem, *destino);
                }
                else{
                    aux.fluxoLogistic(*origem, *destino);
                }
               
                *it = aux;
                
            }
            imprimiSistemas();
        }
    }
    else{
        cout << "a operacao nao foi reconhecida";
    }
    
};

void Modelo::imprimiSistemas(){
    cout << "\n";
    for(list<Sistema>::iterator it = sistemas.begin(); it != sistemas.end(); it++){
        Sistema aux = *it;
        cout << "sistema: " << aux.getNome() <<"  valor: " << aux.getValor() << "\n";
    }
};
