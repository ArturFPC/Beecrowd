#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i = 0;
    int valida = 1;
    float soma, num = 0;
    while (valida == 1){
        i = 0;
        soma = 0;
        while (i<2){
            cin>>num;
            if (num <= 10 && num >= 0){
                soma = soma + num;
                i++;
            }else{
                cout<<"nota invalida"<<endl;
            }
        }
        cout<<"media = ";
        cout<<fixed<<setprecision(2)<< soma/2<<endl;
        valida = 0;
        while (valida != 1 && valida != 2){
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            cin>>valida;
        }
    }
    return 0;
}
