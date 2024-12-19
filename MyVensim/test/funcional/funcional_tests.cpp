#include "funcional_tests.h"

void exponentialFuncionalTest(){
    cout << "exponentialFuncionalTest\n";
    Modelo mod;
    Sistema pop1("pop1", 100);
    Sistema pop2("pop2", 0);
    FluxoExponencial* exponecial = new FluxoExponencial("exponencial", "pop1", "pop2");   
    mod.adicionar(exponecial);
    mod.adicionar(pop1);
    mod.adicionar(pop2);
    mod.execModelo();
    cout << "fim do teste 1\n";
};

void logisticalFuncionalTest(){
    cout << "logisticalFuncionalTest\n";
    Modelo mod;
    Sistema p1("p1", 100);
    Sistema p2("p2", 10);
    FluxoLogistico* logistc = new FluxoLogistico("logistc", "p1", "p2");
    mod.adicionar(logistc);
    mod.adicionar(p1);
    mod.adicionar(p2);
    mod.execModelo();
    cout << "fim do teste 2\n";
};

void complexFuncionalTest(){
    cout << "\ncomplexFuncionalTest\n";
    Modelo mod;
    Sistema q1("q1", 100);
    Sistema q2("q2", 0);
    Sistema q3("q3", 100);
    Sistema q4("q4", 0);
    Sistema q5("q5", 0);
    FluxoExponencial* f = new FluxoExponencial("f", "q1", "q2");
    FluxoExponencial* g = new FluxoExponencial("g", "q1", "q3");
    FluxoExponencial* r = new FluxoExponencial("r", "q2", "q5");
    FluxoExponencial* t = new FluxoExponencial("t", "q2", "q3");
    FluxoExponencial* u = new FluxoExponencial("u", "q3", "q4");
    FluxoExponencial* v = new FluxoExponencial("v", "q4", "q1");
    mod.adicionar(q1);
    mod.adicionar(q2);
    mod.adicionar(q3);
    mod.adicionar(q4);
    mod.adicionar(q5);
    mod.adicionar(f);
    mod.adicionar(g);
    mod.adicionar(r);
    mod.adicionar(t);
    mod.adicionar(u);
    mod.adicionar(v);
    mod.execModelo();
    cout << "fim do teste 3\n";
};
