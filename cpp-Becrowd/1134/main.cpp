#include <iostream>

using namespace std;

int main()
{
    int menu, alcool, gasolina, diesel;
    menu = 0;
    alcool = 0;
    gasolina = 0;
    diesel = 0;
    while (menu != 4){
        cin>>menu;
        if (menu == 1){
            alcool++;
        }
        if (menu == 2){
            gasolina++;
        }
        if (menu == 3){
            diesel++;
        }
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<alcool<<endl;
    cout<<"Gasolina: "<<gasolina<<endl;
    cout<<"Diesel: "<<diesel<<endl;
    return 0;
}
