#include "LogisticFlow.h"

LogisticFlow::LogisticFlow(const string &name, System &source, System &target, double value)
    : Flow(name, source, target, value) {}

float LogisticFlow::calculate()
{
    setValue(0.01 * getTarget()->getValue() * (1 - getTarget()->getValue() / 70));
    return getValue();
}
 