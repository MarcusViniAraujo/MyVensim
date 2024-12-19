#ifndef FLUXOEXPONENCIAL_H
#define FLUXOEXPONENCIAL_H

#include "Fluxo.h"

class FluxoExponencial : public Fluxo {
public:
    FluxoExponencial(string name = "", string org = "", string dest = "", double v = 0);
    void calcular(Sistema& org, Sistema& dest) override;
};

#endif
