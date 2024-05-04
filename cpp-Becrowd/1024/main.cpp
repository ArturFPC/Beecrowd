#include <iostream>

using namespace std;
bool letra(char l){
    int laux = static_cast<int>(l);
    if ((laux >= 65 && laux <=90)||(laux >= 97 && laux <= 122)){
        return true;
    }else{
        return false;
    }
}
string primeira_passada(string p){
    char aux;
    for (int i = 0; i<static_cast<int>(p.size());i++){
        if (letra(p[i])){
            aux = p[i];
            p[i] = static_cast<char>(aux+3);
        }
    }
    return p;
}
string segunda_passada(string p){
    int pos = static_cast<int>(p.size())-1;
    string p2 = p;
    for (int i = 0; i < static_cast<int>(p.size());i++){
        p[i] = p2[pos];
        pos = pos -1;
    }
    return p;
}
string terceira_passada(string p){
    int t = static_cast<int>(p.size())/2;
    char aux;
    for (int i = t; i < static_cast<int>(p.size()); i++){
        aux = static_cast<char>(p[i]-1);
        p[i] = aux;
    }
    return p;
}
int main()
{
    int n = 0;
    cin>>n;
    cin.ignore();
    string palavra;
    for (int i = 0; i<n;i++){
        getline(cin,palavra);
        palavra = primeira_passada(palavra);
        palavra = segunda_passada(palavra);
        palavra = terceira_passada(palavra);
        cout<<palavra<<endl;
    }
}
