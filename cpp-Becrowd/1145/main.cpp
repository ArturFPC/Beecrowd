#include <iostream>

using namespace std;

int main()
{
    int x, y, num;
    cin>>x>>y;
    num = 1;
    while (num <= y){
        if (num % x != 0){
            cout<<num<<" ";
            num++;
        }else{
            cout<<num<<endl;
            num++;
        }
    }
    return 0;
}
