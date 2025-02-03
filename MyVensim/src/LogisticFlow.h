#ifndef LOGISTICFLOW_H
#define LOGISTICFLOW_H

#include "Flow.h"

class LogisticFlow : public Flow
{
public:
    LogisticFlow(const string &name, System &source, System &target, double value = 0);
    float calculate() override;
};
 
#endif
