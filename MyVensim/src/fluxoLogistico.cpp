#include "FluxoLogistico.h"

FluxoLogistico::FluxoLogistico(string name, string org, string dest, double v)
    : Fluxo(name, org, dest, v) {}

void FluxoLogistico::calcular(Sistema& org, Sistema& dest) {
    valor = 0.01 * dest.getValor() * (1 - dest.getValor() / 70);
    org.setValor(org.getValor() - valor);
    dest.setValor(dest.getValor() + valor);
}
