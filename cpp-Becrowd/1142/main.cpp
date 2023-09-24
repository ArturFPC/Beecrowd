#include <iostream>

using namespace std;

int main()
{
    int n, aux;
    cin>>n;
    aux = 1;
    for (int j = 0; j<n;j++){
        for (int i = 1; i<=4; i++){
            if (i != 4){
                cout<<aux<<" ";
                aux++;
            }else{
                cout<<"PUM"<<endl;
                aux++;
            }
        }
    }
    return 0;
}
