#include "Flow.h"

Flow::Flow() : name(""), source(nullptr), target(nullptr), value(0.0) {}

Flow::Flow(const string &name, System &source, System &target, double value)
    : name(name), source(&source), target(&target), value(value) {}
 
Flow::Flow(const Flow &copy) {
    name = copy.name;
    source = copy.source;
    target = copy.target;
    value = copy.value;
}

Flow::~Flow() {}

Flow& Flow::operator=(const Flow &copy)
{
    if (this == &copy){
        return *this;
    }
    
    name = copy.name;
    source = copy.source;
    target = copy.target;
    value = copy.value;
    
    return *this;
}

void Flow::setSource(System *source)
{
    this->source = source;
}

void Flow::setTarget(System *target)
{
    this->target = target;
}

System *Flow::getSource()
{
    return source;
}

System *Flow::getTarget()
{
    return target;
}

void Flow::setValue(double value)
{
    this->value = value;
}

double Flow::getValue()
{
    return value;
}

void Flow::setName(string name)
{
    this->name = name;
}

string Flow::getName()
{
    return name;
}
