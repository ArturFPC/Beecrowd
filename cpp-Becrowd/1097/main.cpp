#include <iostream>

using namespace std;

int main()
{
    int i, j, aux;
    int cont =0;
    i = 1;
    aux = 7;
    j = 7;
    while (i<= 9){
        j = aux -cont;
        cout<<"I="<<i<<" J="<<j<<endl;
        cont++;
        if (cont == 3){
            aux = aux +2;
            cont = 0;
            i = i+2;
        }
    }

    return 0;
}
