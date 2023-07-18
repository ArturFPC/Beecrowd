#include <iostream>

using namespace std;

int main()
{
    float i, j, aux;
    int cont =0;
    i = 0;
    aux = 1;
    j = 1;
    while (i< 2.1){
        j = aux +cont;
        cout<<"I="<<i<<" J="<<j<<endl;
        cont++;
        if (cont == 3){
            aux = aux +0.2;
            cont = 0;
            i = i+0.2;
        }
    }

    return 0;
}
