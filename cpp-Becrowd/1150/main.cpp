#include <iostream>

using namespace std;

int main()
{
    int x, z, cont, total;
    cont = 1;
    cin>>x>>z;
    total = x;
    while(z<=x){
        cin>>z;
    }
    while(total<= z){
        x = x +1;
        total= total + x;
        cont++;
    }
    cout<<cont<<endl;
    return 0;
}
