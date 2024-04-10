#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float x = 1;
    float i = 2;
    while (i<=100){
        x = x+ 1/i;
        i++;
    }
    cout << fixed<< setprecision(2)<<x<< endl;
    return 0;
}
