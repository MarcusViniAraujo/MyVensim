#include "ExponentialFlow.h"

ExponentialFlow::ExponentialFlow(const string &name, System &source, System &target, double value)
    : Flow(name, source, target, value) {}

float ExponentialFlow::calculate()
{
    setValue(getSource()->getValue() * 0.01);
    return getValue();
}
