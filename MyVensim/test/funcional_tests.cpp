#include "funcional_tests.h"

bool teste1(int value){
    Sistema pop1("pop1", 100);
    Sistema pop2("pop2", 0);
    Fluxo exponecial(pop1, pop2, 0);
    Modelo mod;
    mod.adicionarFluxo(exponecial);
    mod.adicionarSistema(pop1);
    mod.adicionarSistema(pop2);
    mod.setOperacao(0);
    mod.execModelo();
};

bool teste2(int value){

};

bool teste3(int value){

};