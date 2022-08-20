#include "Data.h"
#include <stdlib.h>

#include <iostream>

using namespace std;

int main(void)
{
    system("cls");
    Data data;
    int dia, mes, ano, avancar;

    cout << "Digite o dia: ";
    cin >> dia;
    cout << "Digite o mes: ";
    cin >> mes;
    cout << "Digite o ano: ";
    cin >> ano;
    
    do
    {
        cout << endl << "Digite a quantidade de dias a serem avancados: ";
        cin >> avancar;
        
        if (avancar <= 0)
            cout << "Desculpe. Quantidade de dias invalida. Tente novamente!" << endl << endl;
    }
    while (avancar <= 0);

    data.setAno(ano);
    mes = data.getMes(mes);
    dia = data.getDia(dia, mes, ano);

    data.setDia(dia);
    data.setMes(mes);
    data.setAvancar(avancar);

    data.AvancarDia();
    cout << endl;
    data.printData();


    cout << endl << "Pressione ENTER para encerrar!" << endl;
    getchar();
    getchar();

    system("cls");

    return 0;
}
