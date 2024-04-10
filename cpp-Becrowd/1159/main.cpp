#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int consecutivo = 5;
    int soma;
    while (x != 0){
        soma = 0;
        while (consecutivo >0){
            if (x%2 == 0){
                soma = soma + x;
                x = x+2;
                consecutivo--;
            }else{
                x++;
            }
        }
        cout<<soma<<endl;
        cin>>x;
        consecutivo = 5;
    }
    return 0;
}
