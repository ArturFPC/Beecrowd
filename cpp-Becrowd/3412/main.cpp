#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    string nome;
    bool s;
    float soma = 0;
    float num = 0;
    int c;
    for (int i = 0; i<n; i++){
        c = 0;
        s = false;
        getline(cin,nome);
        string dados;
        vector<float> v;
        getline(cin,dados);
        istringstream stream(dados);
        string dado;
        while (stream>>dado){
            v.push_back(stof(dado));
        }
        if (static_cast<int>(v.size())==1){
            cout<<nome<<": "<<fixed<<setprecision(1)<<v[0]/2<<endl;
        }else{
            if(static_cast<int>(v.size())<4){
                float soma = 0;
                for (int j = 0; j<static_cast<int>(v.size());j++){
                    soma = soma +v[j];
                }
                cout<<nome<<": "<<fixed<<setprecision(1)<<soma/static_cast<float>(v.size())<<endl;
            }else{
                int cont = 0;
                int menor = 11;
                for (int j = 0; j<3; j++){
                    if(v[j]<menor){
                        cont = j;
                        menor = v[j];
                    }
                }
                if (v[3]> menor){
                    v[cont] = v[3];
                }
                cout<<nome<<": "<<fixed<<setprecision(1)<<(v[0]+v[1]+v[2])/3<<endl;
            }
        }
    }
    return 0;
}
