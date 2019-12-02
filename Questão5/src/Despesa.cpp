//Despesa.cpp

#include "ControleDeGastos.h"
#include <string>

using namespace std;

    Despesa::Despesa(){
        Valor = 0;
        TipoDeGasto = '.';
    }
    Despesa::Despesa(double valor, string tipodegasto){
        this->Valor = valor;
        this->TipoDeGasto = tipodegasto;
    }
    double Despesa::getValor(){
        return this->Valor;
    }
    void Despesa::setValor(double valor){
        Valor = valor;
    }
    string Despesa::getTipoDeGasto(){
        return this-> TipoDeGasto;
    }
    void Despesa::setTipoDeGasto(string tipodegasto){
        TipoDeGasto = tipodegasto;
    }
