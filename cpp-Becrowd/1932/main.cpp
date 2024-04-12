#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int n;
    int c;
    cin>>n;
    cin>>c;
    int numero;
    int maior = -1;
    int compra = 0;
    int soma = 0;
    for (int i = 0; i<n;i++){
        cin>>numero;
        if (numero> maior){
            maior = numero;
        }
        if (i == 0){
            compra = numero;
        }else{
            if (numero + c< maior){
                if (maior > compra +c){
                    soma = soma +(maior-(compra+c));
                }
                compra = numero;
                maior = compra;
            }
            if (i == (n-1)){
                if (maior > compra+c){
                    soma = soma + (maior-(compra+c));
                }
            }
        }
        if (numero < compra){
            compra = numero;
            maior = compra;
        }

    }
    cout<<soma<<endl;
    return 0;
}
