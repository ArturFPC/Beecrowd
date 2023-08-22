#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i = 0;
    float soma, num = 0;
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
    return 0;
}
