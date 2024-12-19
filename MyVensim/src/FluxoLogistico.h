#ifndef FLUXOLOGISTICO_H
#define FLUXOLOGISTICO_H

#include "Fluxo.h"

class FluxoLogistico : public Fluxo {
public:
    FluxoLogistico(string name = "", string org = "", string dest = "", double v = 0);
    void calcular(Sistema& org, Sistema& dest) override;
};

#endif
