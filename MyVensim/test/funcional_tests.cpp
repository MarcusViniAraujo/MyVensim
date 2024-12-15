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
    Sistema p1("p1", 100);
    Sistema p2("p2", 10);
    Fluxo logistc(p1, p1, 0);
    Modelo mod;
    mod.adicionarFluxo(logistc);
    mod.adicionarSistema(p1);
    mod.adicionarSistema(p2);
    mod.setOperacao(1);
    mod.execModelo();

};

bool teste3(int value){
    Sistema q1("q1", 100);
    Sistema q2("q2", 0);
    Sistema q3("q3", 100);
    Sistema q4("q4", 0);
    Sistema q5("q5", 0);
    Fluxo f(q1, q2, 0);
    Fluxo g(q1, q3, 0);
    Fluxo r(q2, q5, 0);
    Fluxo t(q2, q3, 0);
    Fluxo u(q3, q4, 0);
    Fluxo v(q4, q1, 0);
    Modelo mod;
    mod.adicionarSistema(q1);
    mod.adicionarSistema(q2);
    mod.adicionarSistema(q3);
    mod.adicionarSistema(q4);
    mod.adicionarSistema(q5);
    mod.adicionarFluxo(f);
    mod.adicionarFluxo(g);
    mod.adicionarFluxo(r);
    mod.adicionarFluxo(t);
    mod.adicionarFluxo(u);
    mod.adicionarFluxo(v);
    mod.setOperacao(0);
    mod.execModelo();
};