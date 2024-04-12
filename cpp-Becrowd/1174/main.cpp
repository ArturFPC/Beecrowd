#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    vector<float> v;
    float num;
    for (int i = 0; i<100; i++){
        cin>>num;
        v.push_back(num);
    }
    for (int i = 0; i<100; i++){
        if(v[i] <=10){
            cout<<"A["<<i<<"] = "<<fixed<<setprecision(1)<<v[i]<<endl;
        }
    }
    return 0;
}
