#ifndef EXPONENTIALFLOW_H
#define EXPONENTIALFLOW_H

#include "Flow.h"

class ExponentialFlow : public Flow
{
public:
    ExponentialFlow(const string &name, System &source, System &target, double value = 0);
    float calculate() override;
};

#endif
