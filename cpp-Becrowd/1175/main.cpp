#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int num;
    for (int i = 0; i<20; i++){
        cin>> num;
        v.push_back(num);
    }
    int aux = 0;
    for (int i = 0; i<10; i++){
        aux = v[i];
        v[i] = v[19-i];
        v[19-i] = aux;
    }
    for (int i = 0; i<20;i++){
        cout<<"N["<<i<<"] = "<< v[i]<<endl;
    }

    return 0;
}
