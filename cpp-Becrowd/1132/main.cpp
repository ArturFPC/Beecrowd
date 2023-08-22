#include <iostream>

using namespace std;

int main()
{
    int x,y,soma, maior, menor;
    cin>>x;
    cin>>y;
    soma = 0;
    if (x>y){
        maior=x;
        menor=y;
    }else{
        maior=y;
        menor=x;
    }
    while (menor<=maior){
        if (menor % 13 != 0){
            soma = soma+menor;
        }
        menor++;
    }
    cout<<soma<<endl;
    return 0;
}
