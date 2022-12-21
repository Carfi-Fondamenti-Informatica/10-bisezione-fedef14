#include <iostream>
#include "cmath"
using namespace std;

double f(double y){
    return (pow(y,2)*cos(y))+1;
}

int main(){
   double a = 0, b = 0, x = 0, err = 0;
    do{
        cout << "inserire estremi" << endl;
        cin >> a;
        cin >> b;
    }while(f(a)*f(b) >= 0);

    if(f(a)<f(b)){ 
        b = a+b;
        a = b-a;
        b = b-a;
    }
do {
    x = (a + b) / 2;

    if (f(x) == 0) {
        break;
    }
    if (f(x) < 0) {
        b = x;
    } else {
        a = x;
    }
    err = abs((b-a)/2);
} while(err >= 0.000001);


    int i = x * 10000;
    double l = (float)i/10000;
    cout << l << endl;
   
   
   
   return 0;
}
