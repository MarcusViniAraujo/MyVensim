#include "FluxoExponencial.h"

FluxoExponencial::FluxoExponencial(string name, string org, string dest, double v)
    : Fluxo(name, org, dest, v) {}

void FluxoExponencial::calcular(Sistema& org, Sistema& dest) {
    valor = org.getValor() * 0.01;
    org.setValor(org.getValor() - valor);
    dest.setValor(dest.getValor() + valor);
}
