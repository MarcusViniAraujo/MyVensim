#ifndef FLOW_H
#define FLOW_H

#include <string>
#include "System.h"
 
using namespace std;

class Flow
{
private:
    string name;
    System *source;
    System *target;
    double value;

public:
    Flow();

    Flow(const string &name, System &source, System &target, double value);
    
    Flow(const Flow &copy);

    virtual ~Flow();

    Flow& operator=(const Flow &copy);

    virtual float calculate() = 0;

    System *getSource();

    System *getTarget();
    
    double getValue();
    
    string getName();

    void setSource(System *source);

    void setTarget(System *target);

    void setValue(double value);
    
    void setName(string name);

};

#endif
