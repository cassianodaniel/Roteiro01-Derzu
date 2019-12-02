//Despesa.h

#ifndef DESPESA_H
#define DESPESA_H
#include <string>

using namespace std;

class Despesa
{
    public:
        Despesa();
        Despesa(double, string);
        double getValor();
        void setValor(double);
        string getTipoDeGasto();
        void setTipoDeGasto(string);
    protected:

    private:
        double Valor;
        string TipoDeGasto;
};

#endif //DESPESA_H
