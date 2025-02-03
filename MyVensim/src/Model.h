#ifndef MODEL_H
#define MODEL_H

#include <string>
#include <iostream>
#include <list>
#include <algorithm>
#include "system.h"
#include "Flow.h"
#include "ExponentialFlow.h"
#include "LogisticFlow.h"

using namespace std;

class Model
{
private:
    list<System *> systems;
    list<Flow *> flows;
 
public:
    Model();
    
    Model(const Model &copy);        
    
    virtual ~Model();
    
    Model& operator=(const Model &copy); 

    void add(System *system);

    void remove(System *system);

    void add(Flow *flow);

    void remove(Flow *flow);

    void execute(double begin, double end, double increment);

    void printSystems();
};
#endif
