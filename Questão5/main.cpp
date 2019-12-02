//main.cpp
#include <iostream>
#include <string>
#include "Despesa.h"
#include "ControleDeGastos.h"

using namespace std;

int main()
{
    ControleDeGastos objeto1 = ControleDeGastos();

    Despesa d1 = Despesa(300, "Notebook");
    Despesa d2 = Despesa(20, "Casa");
    Despesa d3 = Despesa(20, "Jóias");

    objeto1.setDespesa(d1, 0);
    objeto1.setDespesa(d2, 1);
    objeto1.setDespesa(d3, 2);

    cout << objeto1.calculaTotalDeDespesas() <<endl;

    return 0;
}
