#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float x = 1;
    float i = 2;
    float j = 3;
    while (j<=39){
        x = x+ j/i;
        i = i *2;
        j = j +2;
    }
    cout << fixed<< setprecision(2)<<x<< endl;
    return 0;
}
