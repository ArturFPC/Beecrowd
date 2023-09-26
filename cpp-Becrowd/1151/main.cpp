#include <iostream>

using namespace std;
int main()
{
    int n, aux,paridade,numero;
    cin>>n;
    numero = 0;
    aux = 1;
    for (int i = 0;i<n-1;i++){
        if (i % 2 == 0){
            cout<<numero<<" ";
            numero = numero + aux;
            paridade = 1;
        }else{
            cout<<aux<<" ";
            aux = aux + numero;
            paridade = 0;
        }
    }
    if (paridade == 0){
        cout<<numero<<endl;
    }else{
        cout<<aux<<endl;
    }

    return 0;
}
