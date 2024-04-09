#include <iostream>
#include <vector>
using namespace std;


int soma(vector<int> v){
    int total = 0;
    for (int i = 0; i< (static_cast<int>(v.size())-1); i++){
        total = total+ abs(v[i] - v[i+1]);
    }
    return total;
}
void printVetor(vector<int> v){
    for (int i = 0; i<static_cast<int>(v.size());i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int maior(vector<int> &v){
    int maior = -1;
    int im = -1;
    for (int i = 0; i < static_cast<int>(v.size()); i++){
        if (v[i] > maior){
            maior = v[i];
            im = i;
        }
    }
    v[im] = -1;
    return maior;
}
void reorganiza(vector<int> &v, int num){
    int i = 0;
    while (i < static_cast<int>(v.size())&& v[i]!= -1){
        i++;
    }
    int j = 1;
    while(i>0){
        v[i] = v[i-j];
        i--;
    }
    v[0] = num;
}
void insere(int numero, vector<int> &v){
    int i = 0;
    while (i < static_cast<int>(v.size())&& v[i]!= -1){
        i++;
    }
    if (abs(v[0]-numero)>= abs(v[i-1]-numero)){
        reorganiza(v, numero);
    }else{
        v[i] = numero;
    }
}
int permuta_elegante2(vector<int> v){
    vector<int> vmaior;
    for (int i = 0; i<static_cast<int>(v.size()); i++){
        vmaior.push_back(maior(v));
    }
    vector<int> permutado(v.size(), -1);
    permutado[0] = vmaior[0];
    permutado[1] = vmaior[v.size()-1];
    int numero = v.size()-2;
    int auxi = 1;
    int s = 0;
    int indiceMa = 1;
    int indiceMe = 1;
    for (int i = 0; i<(static_cast<int>(v.size())-2); i++){
        if (auxi < 2 && s == 0){
            numero = static_cast<int>(v.size()) - (indiceMe+1);
            indiceMe++;
            auxi++;
        }else{
            if (auxi == 2 && s == 0){
                s = 1;
                auxi = 1;
                numero = indiceMa;
                indiceMa++;
            }else{
                if (auxi < 2  && s == 1){
                    auxi++;
                    numero = indiceMa;
                    indiceMa++;
                }else{
                    if (auxi == 2 && s == 1){
                        s = 0;
                        auxi = 1;
                        numero = static_cast<int>(v.size()) - (indiceMe+1);
                        indiceMe++;
                    }
                }
            }
        }
        insere(vmaior[numero],permutado);
    }
    printVetor(permutado);
    int ss= soma(permutado);

    return ss;
}

int main()
{
    int nl = 0;
    cin>> nl;
    int auxNum;
    int n;
    for (int i =0; i<nl; i++){
        vector<int> v;
        cin>>auxNum;
        for (int j = 0; j<auxNum;j++){
            cin>>n;
            v.push_back(n);
        }
        cout << "Case "<< i+1<<": "<<permuta_elegante2(v)<<endl;
    }

    return 0;
}
