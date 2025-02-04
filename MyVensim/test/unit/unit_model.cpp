#include "../../src/model.h"
#include "../../src/flow.h"
#include "../../src/system.h"

#include "unit_model.h"

void unit_model_constructor(void){
    Model newModel;
    assert(newModel.getFlows().empty());
    assert(newModel.getSystems().empty());

};

void unit_model_destructor(void){

};

void unit_model_getSystems(void){
    Model newModel;
    System system1("Test System 1", 10);
    System system2("Test System 2", 20);

    newModel.add(&system1);
    newModel.add(&system2);
    list<System*>systems = newModel.getSystems();

    assert(systems.size() == 2);
    assert(systems.front() == &system1);
    assert(systems.back() == &system2);
};

void unit_model_getFlows(void)
{
    Model newModel;
    System s1, s2;
    ExponentialFlow *flow1 = new ExponentialFlow("exponential", s1, s2);
    ExponentialFlow *flow2 = new ExponentialFlow("exponential", s1, s2);

    newModel.add(flow1);
    newModel.add(flow2);

    list<Flow *> flows = newModel.getFlows();

    assert(flows.size() == 2);
    assert(flows.front() == flow1);
    assert(flows.back() == flow2);

    delete flow1;
    delete flow2;

}

void unit_model_add(void){
    Model newModel;
    System system1("Test System", 10);
    ExponentialFlow *flow1 = new ExponentialFlow("exponential", system1, system1);

    newModel.add(&system1);
    newModel.add(flow1);

    assert(newModel.getSystems().size() == 1);
    assert(newModel.getSystems().front() == &system1);

    assert(newModel.getFlows().size() == 1);
    assert(newModel.getFlows().front() == flow1);

};

void unit_model_execute(void){
    
};

void unit_model_remove(void){
    Model newModel;
    System system1("Test System", 10);
    ExponentialFlow *flow1 = new ExponentialFlow("exponential", system1, system1);

    newModel.add(&system1);
    newModel.add(flow1);

    newModel.remove(&system1);
    newModel.remove(flow1);

    assert(newModel.getSystems().size() == 0);
    assert(newModel.getFlows().size() == 0);
};

void unit_model_printSystems(void){

};

void run_unit_test_model(void){
    unit_model_constructor();
    unit_model_destructor();
    unit_model_getSystems();
    unit_model_getFlows();
    unit_model_add();
    unit_model_execute();
    unit_model_remove();
    unit_model_printSystems();

};