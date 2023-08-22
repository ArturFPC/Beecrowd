#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin>>n;
    float a,b;
    for (int i = 0; i<n;i++){
        cin>>a>>b;
        if (b == 0){
            cout<<"divisao impossivel"<<endl;
        }else{
            cout<<fixed<<setprecision(1)<<a/b<<endl;
        }
    }
    return 0;
}
