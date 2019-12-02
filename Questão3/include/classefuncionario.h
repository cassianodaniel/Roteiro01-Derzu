//classefuncionario.h
#ifndef CLASSEFUNCIONARIO_H
#define CLASSEFUNCIONARIO_H
#include <string>

using namespace std;

class Funcionario{
    private:
        string Nome, Sobrenome;
        double Salario;
            public:
                double SalarioAnual();
                double AumentoSalarioAnual();
                Funcionario();
                Funcionario(string,string,double);
                string getNome();
                string getSobrenome();
                double getSalario();
                void setNome(string varsetnome);
                void setSobrenome(string varsetsobrenome);
                void setSalario(double varsetsalario);
};

#endif
