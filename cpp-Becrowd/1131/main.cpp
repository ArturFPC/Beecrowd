    #include <iostream>

    using namespace std;

    int main()
    {
        int inter,gre, emp, i, gi, gg, valida;
        i = 0;
        gre =0;
        inter = 0;
        emp = 0;
        valida = 0;
        while (valida !=2){
            valida = 0;
            cin>>gi>>gg;
            if (gi >gg){
                inter++;
            }else{
                if (gi == gg){
                    emp++;
                }else{
                    gre++;
                }
            }
            while (valida != 1 && valida != 2){
                cout<<"Novo grenal (1-sim 2-nao)"<<endl;
                cin>>valida;
            }
            i++;
        }
        cout<<i<<" grenais"<<endl;
        cout<<"Inter:"<<inter<<endl;
        cout<<"Gremio:"<<gre<<endl;
        cout<<"Empates:"<<emp<<endl;
        if (inter>gre){
            cout<<"Inter venceu mais"<<endl;
        }else{
            if (inter == gre){
                cout<<"Nao houve vencedor"<<endl;
            }else{
                cout<<"Gremio venceu mais"<<endl;
            }
        }
        return 0;
    }
