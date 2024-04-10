#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int nCasos;
    cin>>nCasos;
    int pa = 0;
    int pb = 0;
    float g1 = 0;
    float g2 = 0;
    int anos = 0;
    for (int i = 0; i<nCasos;i++){
        anos = 0;
        cin>>pa;
        cin>>pb;
        cin>>g1;
        cin>>g2;
        while(pa<=pb){
            pa = pa + floor(pa * (g1/100));
            pb = pb + floor(pb * (g2/100));
            anos++;
            if (anos>100){
                cout<<"Mais de 1 seculo."<<endl;
                break;
            }
        }
        if (anos <= 100){
            cout<<anos<<" anos."<<endl;
        }
    }
    return 0;
}
