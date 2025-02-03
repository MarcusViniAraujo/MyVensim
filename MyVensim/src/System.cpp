#include "System.h"

System::System() : name(""), value(0.0) {}; 

System::System(const string &name, double value)
    : name(name), value(value) {}

System::System(const System &copy) {
    name = copy.name;
    value = copy.value;
}

System::~System() {}

System& System::operator=(const System &copy)
{
    if (this == &copy){
        return *this;
    }

    name = copy.name;
    value = copy.value;
    
    return *this;
}
 
void System::setName(const string &name)
{
    this->name = name;
}

void System::setValue(double value)
{
    this->value = value;
}

string System::getName() const
{
    return name;
}

double System::getValue() const
{
    return value;
}
