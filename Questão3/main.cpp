//main.cpp_____________________________
#include <iostream>
#include "classefuncionario.h"
#include <string>

using namespace std;

int main()
{
  Funcionario *empregado1 = new Funcionario("Daniel", "Cassiano", 20000);

  cout << "Nome: " << empregado1->getNome() << " " << empregado1->getSobrenome() << endl;
  cout << "Salario anual: " << empregado1->SalarioAnual() << endl;
  cout << "Salario anual com aumento: " << empregado1->AumentoSalarioAnual() << endl;
}
