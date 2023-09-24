#include <iostream>
using namespace std;

int main()
{
    int n, aux;
    cin>>n;
    aux = 1;
    for (int i = 0; i<n;i++){
        cout<<aux<<" "<< aux * aux<<" "<< aux* aux* aux<<endl;
        cout<<aux<<" "<< (aux * aux)+1<<" "<< (aux* aux* aux)+1<<endl;
        aux++;
    }

    return 0;
}
