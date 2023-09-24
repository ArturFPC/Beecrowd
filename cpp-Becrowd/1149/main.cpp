#include <iostream>

using namespace std;

int main()
{
    int a, n, total;
    total = 0;
    cin>>a;
    cin>>n;
    while (n <= 0){
        cin>>n;
    }
    for (int i = 0; i<n;i++){
        total = total+(a+i);
    }
    cout<<total<<endl;
    return 0;
}
