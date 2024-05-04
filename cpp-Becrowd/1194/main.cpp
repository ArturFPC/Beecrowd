#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int nos;
    string prefixo;
    string infixo;
    char raiz;
    for (int i = 0; i< n; i++){
        cin>>nos;
        cin>>prefixo;
        raiz = prefixo[0];
        cin>>infixo;
        cout<<raiz<<endl;
    }
    return 0;
}
