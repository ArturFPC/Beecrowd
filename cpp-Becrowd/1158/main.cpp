#include <iostream>

using namespace std;

int main()
{
    int ncasos;
    cin>>ncasos;
    int x;
    int y;
    int soma;
    for (int i = 0; i< ncasos; i++){
        cin>>x;
        cin>>y;
        soma = 0;
        while (y>0){
            if (x%2 != 0){
                soma = soma + x;
                x = x+2;
                y--;
            }else{
                x++;
            }
        }
        cout<<soma<<endl;
    }
    return 0;
}
