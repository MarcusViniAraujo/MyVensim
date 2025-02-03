#ifndef SYSTEM_H
#define SYSTEM_H

#include <string>
#include <iostream>

using namespace std;

class System
{
private:
    string name;
    double value;

public:
    System ();

    System(const string &name, double value);
    
    System(const System &copy);
    
    virtual ~System();
    
    System& operator=(const System &copy);

    void setName(const string &name);

    void setValue(double value);

    string getName() const;

    double getValue() const;
};

#endif