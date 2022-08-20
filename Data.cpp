#include "Data.h"
#include <iostream>

using namespace std;

Data::Data()
{ }

Data::~Data()
{ }

void Data::setDia(int dia)
{
    this->dia = dia;
}

void Data::setMes(int mes)
{
    this->mes = mes;
}

void Data::setAno(int ano)
{
    this->ano = ano;
}

void Data::setAvancar(int avancar)
{
    this->avancar = avancar;
}

int Data::getDia(int dia, int mes, int ano)
{
    if (dia > getDaysMonth(mes, ano))
    {
        cout << "Atributo dia Inválido" << endl;
        return 1;
    }
    else
    {
        return dia;
    }
}

int Data::getMes(int mes)
{
    if (mes > 12 || mes < 1)
    {
        cout << "Atributo mês Inválido" << endl;
        return 1;
    }
    else
    {
        return mes;
    }
}

int Data::getDaysMonth(int mes, int ano)
{
    switch(mes)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
            break;
        case 2:
            if (ano%4)
            { // nao divisivel por 4
                return 28;
                break;
            }
            else
            { // divisivel por 4
                if (ano%100) { // nao divisivel por 100
                    return 29;
                    break;
                }
                else
                {
                    if (!(ano%400))
                    { // divisivel por 400
                        return 29;
                        break;
                    }
                    else
                    { // nao divisivel por 400
                        return 28;
                        break;
                    }
                }
            }
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
            break;
        default:
            return 1;
    }
}

void Data::AvancarDia()
{
    do
    {
        if (dia + avancar <= getDaysMonth(mes, ano))
        {
            dia += avancar;
            avancar = 0;
        }
        else
        {
            avancar -= (getDaysMonth(mes, ano) - dia + 1);
            dia = 1;

            if (mes != 12)
            {
                mes++;
            }
            else
            {
                mes = 1;
                ano++;
            }
        }
    }
    while (avancar != 0);
}

void Data::printData()
{

    if (dia < 10)
    {
        cout << 0;
    }
    cout << dia << "/";

    if (mes < 10)
    {
        cout << 0;
    }
    cout << mes << "/" << ano << endl;
}