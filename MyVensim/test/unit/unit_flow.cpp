#include "../../src/flow.h"
#include "../../src/ExponentialFlow.h"
#include "../../src/LogisticFlow.h"

#include "../../src/system.h"

#include "unit_flow.h"

void unit_flow_constructor(void){
    
};
void unit_flow_destructor(void){

};

void unit_flow_setName(void){
    System s1, s2;
    ExponentialFlow *flow1 = new ExponentialFlow("exponential", s1, s2);
    flow1->setName("testName");
    assert(flow1->getName() == "testName");

    delete flow1;

};

void unit_flow_getName(void){
    System s1, s2;
    ExponentialFlow *flow1 = new ExponentialFlow("exponential", s1, s2);
    assert(flow1->getName() == "exponential");
    delete flow1;

};

void unit_flow_setValue(void){
    System s1, s2;
    ExponentialFlow *flow1 = new ExponentialFlow("exponential", s1, s2);
    flow1->setValue(100);
    assert(flow1->getValue() == 100);
    delete flow1;

};

void unit_flow_getValue(void){
    System s1, s2;
    ExponentialFlow *flow1 = new ExponentialFlow("exponential", s1, s2, 100);
    assert(flow1->getValue() == 100);
    delete flow1;

};

void unit_flow_setSource(void){
    System s1("system1", 100);
    System s2("system2", 0);

    ExponentialFlow *flow1 = new ExponentialFlow("exponential", s1, s2);
    flow1->setSource(&s2);
    assert(flow1->getSource()->getName() == "system2");
    delete flow1;

};

void unit_flow_setTarget(void){
    System s1("system1", 100);
    System s2("system2", 0);

    ExponentialFlow *flow1 = new ExponentialFlow("exponential", s1, s2);
    flow1->setSource(&s1);
    assert(flow1->getSource()->getName() == "system1");
    delete flow1;

};

void unit_flow_getSource(void){
    System s1("system1", 100);
    ExponentialFlow *flow1 = new ExponentialFlow("exponential", s1, s1);
    assert(flow1->getSource()->getName() == "system1");
    delete flow1;

};

void unit_flow_getTarget(void){
    System s1("system1", 100);
    ExponentialFlow *flow1 = new ExponentialFlow("exponential", s1, s1);
    assert(flow1->getTarget()->getName() == "system1");
    delete flow1;

};

void unit_flow_calculate(void){

};

void unit_flow_exponencial_constructor(void){
    System s1("system1", 100);
    ExponentialFlow *flow1 = new ExponentialFlow("exponential", s1, s1);

    assert(flow1->getName() == "exponential");
    assert(flow1->getSource()->getName() == "system1");
    assert(flow1->getTarget()->getName() == "system1");
    assert(flow1->getValue() == 0);

    delete flow1;
};
void unit_flow_exponencial_calculate(void){

};

void unit_flow_logistic_constructor(void){
    System s1("system1", 100);
    LogisticFlow *flow1 = new LogisticFlow("Logistic", s1, s1);

    assert(flow1->getName() == "Logistic");
    assert(flow1->getSource()->getName() == "system1");
    assert(flow1->getTarget()->getName() == "system1");
    assert(flow1->getValue() == 0);

    delete flow1;
};
void unit_flow_logistic_calculate(void){

};

void run_unit_test_flow(void){
    unit_flow_constructor();
    unit_flow_destructor();
    unit_flow_calculate();
    unit_flow_setName();
    unit_flow_getName();
    unit_flow_setValue();
    unit_flow_getValue();
    unit_flow_setSource();
    unit_flow_setTarget();
    unit_flow_getSource();
    unit_flow_getTarget();
    unit_flow_exponencial_constructor();
    unit_flow_logistic_constructor();
    unit_flow_exponencial_calculate();
    unit_flow_logistic_calculate();
};