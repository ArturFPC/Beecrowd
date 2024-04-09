#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    float num;
    while (true){
        vector<float> pos;
        bool resposta = true;
        for (int i = 0; i<6; i++){
            cin>> num;
            pos.push_back(num);
            if (cin.eof()){
                resposta = false;
            }
        }
        float x = pos[4] - pos[1];
        float y = pos[5] - pos[2];
        float d = sqrt((x*x)+(y*y));
        if (resposta == true){
            if (pos[0] >= d+pos[3]){
                cout<<"RICO"<<endl;
            }else{
                cout<<"MORTO"<<endl;
            }
        }
        if (cin.eof()){
            break;
        }
    }
    return 0;
}
