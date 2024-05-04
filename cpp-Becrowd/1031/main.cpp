#include <iostream>
#include <vector>
using namespace std;
int andar(vector<int> &v, int nc, int casa){
    //nc = 5
    //casa = 1
    for (int i = 1; i<=nc; i++){
        casa = casa + 1;
        //casa + i > tamanho do vetor
        if (casa> static_cast<int>(v.size())){
            casa = 1;
        }
        if (v[casa-1] == 0){
            nc++;
        }
        if (v[casa-1] == 1 && nc == i){
            v[casa-1] = 0;
            return casa;
        }
        //v[i] == 0
    }
    return 1;
}
int procura(int c){
    int maior = -1;
    int mi = 1;
    int casa = 1;
    int nc;
    int i = 1;
    while (maior != c-1){
        vector<int> v(c,1);
        v[0] = 0;
        casa = 1;
        nc = 0;
        while (casa != 13 ){
            casa = andar(v,i,casa);
            nc++;
        }
        if (nc > maior){
            maior = nc;
            mi = i;
        }
        i++;
    }

    return mi;
}
int main()
{
    int c = 13;
    while (c!=0){
        cin>>c;
        if (c == 0){
            break;
        }
        cout<<procura(c)<<endl;
    }
    return 0;
}
