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
                cout << "Por favor, digite uma data v�lida!" << endl;
                cin >> Dia;
                continue;
            }
                while(Mes < 1 || Mes > 12){
                cout << "Por favor, digite uma m�s v�lido!" << endl;
                cin >> Mes;
                continue;
            }
                while(Ano < 0 || Ano > 2019){
                cout << "Por favor, digite um ano v�lido!" << endl;
                cin >> Ano;
                continue;
            }
            cout << "A data �: " << Dia << "/" << Mes << "/" << Ano << "!" << endl;
            cout << "Se voc� deseja confirmar o m�todo avancarDia, digite 1:" << endl;
            int x;
            cin >> x;
            if(x==1){
                this->Dia = Dia+1;
            }
            else{
                return;
            }
        cout << "Sua nova data �: " << Dia << "/" << Mes << "/" << Ano << "!" << endl;
    }
};
#endif;
