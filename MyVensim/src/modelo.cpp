#include "Modelo.h"


Modelo::Modelo() {}


Modelo::Modelo(const list<Sistema>& sist, const list<Fluxo*>& flux) {
    sistemas = sist;
    fluxos = flux; 
}

Modelo::Modelo(const Modelo& mod)
    : sistemas(mod.sistemas), fluxos(mod.fluxos) {
}

Modelo::~Modelo() {
    if (!fluxos.empty()) {
        for (auto fluxo : fluxos) {
            delete fluxo;
        }
    }
}

void Modelo::adicionar(const Sistema& sistema) {
    sistemas.push_back(sistema);
}

void Modelo::remover(const Sistema& sistema) {
    sistemas.remove(sistema);
}

void Modelo::adicionar(Fluxo* fluxo) {
    fluxos.push_back(fluxo);
}

void Modelo::remover(Fluxo* fluxo) {
    fluxos.remove_if([fluxo](Fluxo* f) { return f == fluxo; });
}

void Modelo::execModelo() {
    for (int i = 0; i < 100; i++) {
        for (auto fluxo : fluxos) { 
            string nomeOrigem = fluxo->getOrg();
            string nomeDestino = fluxo->getDest();

            auto origem = find_if(sistemas.begin(), sistemas.end(),
                [&nomeOrigem](const Sistema& s) { return s.getNome() == nomeOrigem; });

            auto destino = find_if(sistemas.begin(), sistemas.end(),
                [&nomeDestino](const Sistema& s) { return s.getNome() == nomeDestino; });

            if (origem != sistemas.end() && destino != sistemas.end()) {
                fluxo->calcular(*origem, *destino); 
            }
        }
        imprimiSistemas();
    }
}

void Modelo::imprimiSistemas(){
    cout << "\n";
    for(list<Sistema>::iterator it = sistemas.begin(); it != sistemas.end(); it++){
        Sistema aux = *it;
        cout << "sistema: " << aux.getNome() <<"  valor: " << aux.getValor() << "\n";
    }
};
