    #include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int tempo;
    string periodo;
    for (int i = 0; i<n;i++){
        cin>>tempo;
        cin>>periodo;
        if(periodo[0] == '1'){
            if(tempo>45){
                cout<<45<<"+"<<tempo-45<<endl;
            }else{
                cout<<tempo<<endl;
            }
        }else{
            if(tempo>45){
                cout<<90<<"+"<<tempo-45<<endl;
            }else{
                cout<<tempo+45<<endl;
            }
        }
    }
    return 0;
}
