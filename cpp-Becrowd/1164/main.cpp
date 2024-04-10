#include <iostream>

using namespace std;

int main()
{
    int nCasos = 0;
    cin>>nCasos;
    int num = 0;
    int soma;
    for (int i = 0; i<nCasos; i++){
        soma = 0;
        cin>>num;
        for (int j = 1; j<num;j++){
            if (num % j == 0){
                soma = soma + j;
            }
        }
        if (soma == num){
            cout<<num<<" eh perfeito"<<endl;
        }else{
            cout<<num<<" nao eh perfeito"<<endl;
        }
    }
    return 0;
}
