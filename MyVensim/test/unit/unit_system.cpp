#include "unit_System.h"
#include "../../src/system.h"

void unit_system_constructor(void){
    System sistema1;
    System sistema2("sistema2", 10);

    assert(sistema1.getName() == "");
    assert(sistema1.getValue() == 0);

    assert(sistema2.getName() == "sistema2");
    assert(sistema2.getValue() == 10);

};

void unit_system_destructor(void){

};

void unit_system_getName(void){
    System sistema1("sistema1", 100);
    assert(sistema1.getName() == "sistema1");

};

void unit_system_setName(void){
    System sistema1;
    sistema1.setName("sistema1");
    assert(sistema1.getName() == "sistema1");

};

void unit_system_getValue(void){
    System sistema1("sistema1", 100);
    assert(sistema1.getValue() == 100);

};

void unit_system_setValue(void){
    System sistema1;
    sistema1.setValue(100);
    assert(sistema1.getValue() == 100);

};

void run_unit_test_system(void){
    unit_system_constructor();
    unit_system_destructor();
    unit_system_getName();
    unit_system_setName();
    unit_system_getValue();
    unit_system_setValue();

};