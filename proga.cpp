#include <iostream>
#include <cmath>
using namespace std;
float a,b,x;
float f(float x1) { 
    return (sqrt(1-0.4*x1*x1) - asin(x1));
}
int main() {
    a = 0;
    b = 1;
    while (abs(b-a) > 0.0001) {
        x = (b+a)/2;
        if (f(a)*f(x)<0) {
            b = x;
        }
        else {
            a = x;
        }
    }
    cout << b << endl;
    return 0;
}
