#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, cont;
    float total;
    cin>>n;
    cont = 0;
    total = 0;
    while (n>=0){
        total = total + n;
        cont++;
        cin>>n;
    }
    cout<<fixed<<setprecision(2)<<total/cont<<endl;
    return 0;
}
