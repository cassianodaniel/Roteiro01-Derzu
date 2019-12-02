//classefuncionario.cpp
#include "classefuncionario.h"
#include <iostream>

Funcionario::Funcionario(){
    string Nome = ".";
    string Sobrenome = ".";
    double Salario = 1;
}

Funcionario::Funcionario(string nome,string sobrenome, double salario){
    Nome = nome;
    Sobrenome = sobrenome;
    Salario = salario;
}

double Funcionario::SalarioAnual(){
    return Salario*12;
}

double Funcionario::AumentoSalarioAnual(){
    return ((Salario*12) + ((Salario*12)/10));
}

string Funcionario::getNome(){
    return this->Nome;
}
string Funcionario::getSobrenome(){
    return Sobrenome;
}
double Funcionario::getSalario(){
    if(Salario >= 0){
        return Salario;
    }
    else {cout << "Salário não configurado";
        return 0.0;
    }
}
void Funcionario::setNome(string varsetnome){
    Nome = varsetnome;
}
void Funcionario::setSobrenome(string varsetsobrenome){
    Sobrenome = varsetsobrenome;
}
void Funcionario::setSalario(double varsetsalario){
    if(Salario >= 0){
    Salario = varsetsalario;
    }
    else if(Salario < 0){
        cout << ("Salário mensal não positivo e não configurado.");
    }
}
