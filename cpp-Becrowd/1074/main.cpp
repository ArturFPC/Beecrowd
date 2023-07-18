#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = 0; i<n;i++){
        int numero;
        cin>>numero;
        if (numero == 0){
            cout<<"NULL"<<endl;;
        }else{
            if (numero % 2 == 0){
                if (numero > 0){
                    cout<<"EVEN POSITIVE"<<endl;
                }else{
                    cout<<"EVEN NEGATIVE"<<endl;
                }
            }else{
                if (numero > 0){
                    cout<<"ODD POSITIVE"<<endl;
                }else{
                    cout<<"ODD NEGATIVE"<<endl;
                }
            }
        }

    }
    return 0;
}
