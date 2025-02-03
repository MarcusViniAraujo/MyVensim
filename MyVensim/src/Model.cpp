#include "Model.h"
#include <vector>

Model::Model() {
    systems.clear();
    flows.clear();
}

Model::Model(const Model &copy){
    systems.insert(systems.begin(), copy.systems.begin(), copy.systems.end());
    flows.insert(flows.begin(), copy.flows.begin(), copy.flows.end());
}

Model::~Model() {}

Model& Model::operator=(const Model &copy)
{
    if (this == &copy){
        return *this;
    }
    
    systems.clear();
    flows.clear();

    systems.insert(systems.begin(), copy.systems.begin(), copy.systems.end());
    flows.insert(flows.begin(), copy.flows.begin(), copy.flows.end());

    return *this;
}

void Model::add(System *system)
{
    systems.push_back(system);
}

void Model::remove(System *system)
{
    systems.remove(system);
}

void Model::add(Flow *flow)
{
    flows.push_back(flow);
}

void Model::remove(Flow *flow)
{
    flows.remove(flow);
} 

void Model::execute(double begin, double end, double increment)
{
    vector<float> values;
    int j = 0;
    for (double i = begin; i < end; i += increment)
    {
        for(list<Flow *> :: iterator it = flows.begin(); it != flows.end(); it++){
            values.push_back((*it)->calculate());
        }
         for(list<Flow *> :: iterator it = flows.begin(); it != flows.end(); it++){
            (*it)->getTarget()->setValue((*it)->getTarget()->getValue() + values[j]);
            (*it)->getSource()->setValue((*it)->getSource()->getValue() - values[j]);
            j++;
        }
    }
    printSystems();
}

void Model::printSystems()
{
    cout << "\n";
    for (const auto &system : systems)
    {
        cout << "System: " << system->getName()
             << " Value: " << system->getValue() << "\n";
    }
}