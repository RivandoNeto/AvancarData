#include <iostream>

class Data
{
    public:
        Data();
        ~Data();

        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);
        void setAvancar(int avancar);

        void AvancarDia();
        void printData();
        int getDia(int dia, int mes, int ano);
        int getMes(int mes);
        int getDaysMonth(int mes, int ano);
    
    private:
        int dia, mes, ano, avancar; // avancar eh a quantidade de dias a serem avancados
};
