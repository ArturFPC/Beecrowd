#include <iostream>

using namespace std;

int main()
{
    int senha;
    senha = 0;
    while (senha != 2002){
        cin>>senha;
        if (senha == 2002){
            cout<<"Acesso Permitido"<<endl;
        }else{
            cout<<"Senha Invalida"<<endl;
        }
    }
    return 0;
}
