#include <iostream>
#include <vector>
using namespace std;
class Robo{
    private:
        char instrucao;
        int figurinha;
        int bordaL;
        int bordaC;
        int linha;
        int coluna;
        char posicao;
    public:
        Robo(Robo &r){
            linha = r.linha;
            coluna = r.coluna;
            posicao = r.posicao;
            figurinha = r.figurinha;
            bordaL = r.bordaL;
            bordaC = r.bordaC;
        }
        Robo(char nPosicao, int nLinha, int nColuna, int nBordaL, int nBordaC){
            linha =  nLinha;
            coluna = nColuna;
            posicao = nPosicao;
            bordaL = nBordaL;
            bordaC = nBordaC;
            figurinha = 0;
        }
        void getInfo(){
            cout<<figurinha<<endl;
        }
        char getInstrucao(){
            return instrucao;
        }
        void setPosicao(char inst, vector<vector<char>> &mapa){
            if (inst == 'D' && posicao == 'N'){
                posicao = 'L';
            }else if(inst == 'D' && posicao == 'L'){
                posicao = 'S';
            }else if(inst == 'D' && posicao == 'S'){
                posicao = 'O';
            }else if(inst == 'D' && posicao == 'O'){
                posicao = 'N';
            }else if(inst == 'E' && posicao == 'N'){
                posicao = 'O';
            }else if(inst == 'E' && posicao == 'L'){
                posicao = 'N';
            }else if(inst == 'E' && posicao == 'S'){
                posicao = 'L';
            }else if(inst == 'E' && posicao == 'O'){
                posicao = 'S';
            }else if(inst == 'F'){
                movimenta(mapa);
            }

        }
        void coletaFigurinha(vector<vector<char>> &mapa){
            if (mapa[linha][coluna] == '*'){
                mapa[linha][coluna] = '.';
                figurinha++;
            }
        }
        void movimenta(vector<vector<char>> &mapa){
            if (posicao == 'S' && linha < bordaL && mapa[linha+1][coluna] != '#'){
                linha++;
                coletaFigurinha(mapa);
            }else if(posicao == 'N' && linha > 0 && mapa[linha-1][coluna] != '#'){
                linha--;
                coletaFigurinha(mapa);
            }else if(posicao == 'L' && coluna < bordaC && mapa[linha][coluna+1] != '#'){
                coluna++;
                coletaFigurinha(mapa);
            }else if(posicao == 'O' && coluna > 0 && mapa[linha][coluna-1] != '#'){
                coluna--;
                coletaFigurinha(mapa);
            }
        }
};
Robo setOrientacao(vector<vector<char>> mapa){
    for (int i = 0; i< mapa.size();i++){
        for (int j = 0; j<mapa[i].size(); j++){
            if (mapa[i][j] == 'N' || mapa[i][j] == 'S' || mapa[i][j] == 'O' || mapa[i][j] == 'L') {
                Robo r(mapa[i][j],i,j,mapa.size()-1,mapa[i].size()-1);
                return r;
            }
        }
    }
}
void preencherMapa(vector<vector<char>> &mapa, int n, int m){
    for (int i = 0; i< n;i++){
        vector<char> lmap;
        for (int j = 0; j<m;j++){
            char pos;
            cin>>pos;
            lmap.push_back(pos);
        }
        mapa.push_back(lmap);
    }
}
void printMapa(vector<vector<char>> mapa){
    for (int i = 0; i< mapa.size();i++){
        for (int j = 0; j<mapa[i].size(); j++){
            cout<<mapa[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    //numero linhas
    int n = 1;
    //numero colunas
    int m = 1;
    //numero instrucao
    int s = 1;
    while (n!=0 && m!=0 && s!=0){
        cin >> n;
        cin >> m;
        cin >> s;
        if (n == 0 && m == 0 && s == 0){
            break;
        }
        vector<vector<char>> mapa;
        preencherMapa(mapa, n, m);
        Robo r(setOrientacao(mapa));
        char instrucao;
        for (int i = 0; i< s; i++){
            cin>> instrucao;
            r.setPosicao(instrucao,mapa);
        }
        r.getInfo();
    }
    return 0;
}
