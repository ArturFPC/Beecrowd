#include <iostream>
#include "math.h"
using namespace std;

int main()
{
    int n, aux;
    cin>>n;
    aux = 1;
    for (int j = 1; j<=n;j++){
        for (int i = 1; i<3; i++){
            cout<<pow(aux,i)<<" ";
        }
        cout<<pow(aux,3)<<endl;
        aux++;
    }
    return 0;
}
