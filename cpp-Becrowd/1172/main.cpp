#include <iostream>
using namespace std;

int main()
{
    int num;
    for (int i = 0; i<10;i++){
        cin>> num;
        if (num <=0){
            num = 1;
        }
        cout<<"X["<<i<<"] = "<<num<<endl;;
    }
    return 0;
}
