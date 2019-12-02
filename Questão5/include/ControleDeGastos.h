//ControleDeGastos.h

#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include <string>
#include "Despesa.h"

using namespace std;

class ControleDeGastos
{
    public:
        ControleDeGastos();
        void setDespesa(Despesa d, int pos);
        double calculaTotalDeDespesas();
        bool existeDespesaDoTipo(string);
    protected:

    private:
        Despesa despesas[100];
};

#endif // CONTROLEDEGASTOS_H
