#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    while (num != 0){
        for (int i = 1; i< num; i++){
            cout<<i<<" ";
        }
        cout<<num<<endl;
        cin>>num;
    }
    return 0;
}
