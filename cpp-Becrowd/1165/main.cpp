#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int nCasos = 0;
    cin>>nCasos;
    int num;
    bool primo;
    int ot;
    for (int i = 0; i < nCasos; i++){
        num = 0;
        primo = true;
        cin>>num;
        if (num != 2){
            ot = floor(num/2);
            for (int j = 2; j<=ot; j++){
                if (num % j == 0){
                    primo = false;
                    break;
                }
            }
        }
        if (primo == true){
            cout<<num<<" eh primo"<<endl;
        }else{
            cout<<num<<" nao eh primo"<<endl;
        }

    }
    return 0;
}
