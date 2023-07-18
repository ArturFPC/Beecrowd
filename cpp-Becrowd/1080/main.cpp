#include <iostream>

using namespace std;

int main()
{
    int n, maior, pM;
    cin>>n;
    maior = n;
    pM = 1;
    for (int i = 2; i<=100;i++){
        cin>>n;
        if (n>maior){
            maior = n;
            pM = i;
        }
    }
    cout<<maior<<endl;
    cout<<pM<<endl;
}
