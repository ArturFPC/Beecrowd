#include <iostream>

using namespace std;

uint64_t fibonacci (int n, uint64_t n0, uint64_t n1){
    if (n == 0){
        return n1;
    }
    return fibonacci(n-1, n1, n0+n1);
}
int main()
{
    int nCasos = 0;
    cin>>nCasos;

    int n = 0;
    for (int i = 0; i<nCasos; i++){
        cin >> n;
        if (n != 0){
            cout<<"Fib("<<n<<") = "<<fibonacci(n-1, 0, 1)<<endl;
        }else{
            cout<<"Fib(0) = 0"<<endl;
        }
    }
    return 0;
}
