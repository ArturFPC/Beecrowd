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
    menor++;
    while (menor<maior){
        if (menor % 5 == 2 || menor % 5 == 3){
            cout<<menor<<endl;
        }
        menor++;
    }
    return 0;
}
