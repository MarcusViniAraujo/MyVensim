#include "funcional_tests.h"
#include <cassert>
#include <cmath>
 
void exponentialFuncionalTest()
{
    cout << "exponentialFuncionalTest\n";
    Model model;
    System pop1("pop1", 100);
    System pop2("pop2", 0);
    ExponentialFlow *exponential = new ExponentialFlow("exponential", pop1, pop2);
    model.add(exponential);
    model.add(&pop1);
    model.add(&pop2);
    model.execute(0, 100, 1);

    assert(fabs(round(pop1.getValue() * 10000 - 36.6032 * 10000)) < 0.0001);
    assert(fabs(round(pop2.getValue() * 10000 - 63.3968 * 10000)) < 0.0001);
    cout << "fim do teste 1\n";

    delete exponential;
};

void logisticFuncionalTest()
{
    cout << "\nlogisticFuncionalTest\n";
    Model model;
    System p1("p1", 100);
    System p2("p2", 10);
    LogisticFlow *logistic = new LogisticFlow("logistic", p1, p2);
    model.add(logistic);
    model.add(&p1);
    model.add(&p2);
    model.execute(0, 100, 1);

    assert(fabs(round(p1.getValue() * 10000 - 88.2167 * 10000)) < 0.0001);
    assert(fabs(round(p2.getValue() * 10000 - 21.7833 * 10000)) < 0.0001);
    cout << "fim do teste 2\n";
    delete logistic;
};

void complexFuncionalTest()
{
    cout << "\ncomplexFuncionalTest\n";
    Model model;
    System q1("q1", 100);
    System q2("q2", 0);
    System q3("q3", 100);
    System q4("q4", 0);
    System q5("q5", 0);
    ExponentialFlow *f = new ExponentialFlow("f", q1, q2);
    ExponentialFlow *g = new ExponentialFlow("g", q1, q3);
    ExponentialFlow *r = new ExponentialFlow("r", q2, q5);
    ExponentialFlow *t = new ExponentialFlow("t", q2, q3);
    ExponentialFlow *u = new ExponentialFlow("u", q3, q4);
    ExponentialFlow *v = new ExponentialFlow("v", q4, q1);
    model.add(&q1);
    model.add(&q2);
    model.add(&q3);
    model.add(&q4);
    model.add(&q5);
    model.add(f);
    model.add(g);
    model.add(r);
    model.add(t);
    model.add(u);
    model.add(v);
    model.execute(0, 100, 1);

    assert(fabs(round(q1.getValue()  * 10000 - 31.8513 * 10000)) < 0.0001);
    assert(fabs(round(q2.getValue() * 10000 - 18.4003 * 10000)) < 0.0001);
    assert(fabs(round(q3.getValue() * 10000 - 77.1143 * 10000)) < 0.0001);
    assert(fabs(round(q4.getValue() * 10000 - 56.1728 * 10000)) < 0.0001);
    assert(fabs(round(q5.getValue() * 10000 - 16.4612 * 10000)) < 0.0001);

    cout << "fim do teste 3\n";

    delete f;
    delete g;
    delete r;   
    delete t;
    delete u;
    delete v;

};
