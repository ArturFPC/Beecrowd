#include <iostream>

using namespace std;

int main()
{
    int n, x, y, soma;
    cin>>n;
    for (int i =0; i<n;i++){
        cin>>x>>y;
        soma = 0;
        if (x<y){
            x= x+1;
            while (x < y){
                if (x % 2 != 0){
                    soma = soma + x;
                }
                x = x+1;
            }
        }else{
            if (y<x){
                y = y+1;
                while (y<x){
                    if (y % 2 != 0){
                        soma = soma +y;
                    }
                    y = y+1;
                }
            }
        }
        cout<<soma<<endl;
    }
    return 0;
}
