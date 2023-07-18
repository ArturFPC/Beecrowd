#include <iostream>

using namespace std;

int main()
{
    int x, y;
    x = 0;
    y = 1;
    while (x != y){
        cin>>x>>y;
        if (x > y){
            cout<<"Decrescente"<<endl;
        }
        if (x < y){
            cout<<"Crescente"<<endl;
        }
    }
}
