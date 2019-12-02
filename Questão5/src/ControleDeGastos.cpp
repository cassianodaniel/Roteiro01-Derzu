//ControleDeGastos.cpp

#include "ControleDeGastos.h"
#include <string>

using namespace std;

ControleDeGastos::ControleDeGastos()
{
}

void ControleDeGastos::setDespesa(Despesa d, int pos)
{
    despesas[pos] = d;
}

double ControleDeGastos::calculaTotalDeDespesas()
{
    double soma = 0;
    for(int i=0; i<100; i++)
    {
        soma += despesas[i].getValor();
    }
    return soma;
}

bool ControleDeGastos::existeDespesaDoTipo(string tipo)
{
    for(int i=0; i<100; i++)
    {
        if(despesas[i].getTipoDeGasto() == tipo)
        {
            return true;
        }
    }
        return false;
}
