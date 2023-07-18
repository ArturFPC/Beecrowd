#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin>>n;
    float a,b,c,media;
    for (int i =0; i<n;i++){
        cin>>a>>b>>c;
        media = ((a*2)+(b*3)+(c*5))/10;
        cout<< fixed<<setprecision(1)<<media<<endl;
    }
    return 0;
}
