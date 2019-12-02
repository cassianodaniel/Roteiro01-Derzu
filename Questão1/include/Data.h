#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#ifndef DATA_H
#define DATA_H

using namespace std;

class Data{
    public:
        int Dia;
        int Mes;
        int Ano;
        Data();
        Data(int dia,int mes,int ano){
            Dia = dia;
            Mes = mes;
            Ano = ano;
                while(Dia < 1 || Dia > 31){
                cout << "Por favor, digite uma data válida!" << endl;
                cin >> Dia;
                continue;
            }
                while(Mes < 1 || Mes > 12){
                cout << "Por favor, digite uma mês válido!" << endl;
                cin >> Mes;
                continue;
            }
                while(Ano < 0 || Ano > 2019){
                cout << "Por favor, digite um ano válido!" << endl;
                cin >> Ano;
                continue;
            }
            cout << "A data é: " << Dia << "/" << Mes << "/" << Ano << "!" << endl;
            cout << "Se você deseja confirmar o método avancarDia, digite 1:" << endl;
            int x;
            cin >> x;
            if(x==1){
                this->Dia = Dia+1;
            }
            else{
                return;
            }
        cout << "Sua nova data é: " << Dia << "/" << Mes << "/" << Ano << "!" << endl;
    }
};
#endif;
