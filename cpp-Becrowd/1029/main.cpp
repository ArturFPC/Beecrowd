#include <iostream>

using namespace std;
int afibo(int n, int &r){
    r = r+1;
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else{
        int total = afibo(n-1, r) + afibo(n-2, r);
        return total;
    }
}

int main()
{
    int n = 0;
    int r = 0;
    int rep = 0;
    cin>>rep;
    for (int i = 0; i < rep; i++){
        cin>>n;
        int fibo = afibo(n,r);
        cout<<"fib("<<n<<") = " <<r-1<< " calls = "<< fibo<<endl;
        r = 0;
    }
    return 0;
}
