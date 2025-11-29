#include <cstdint>
#include <iostream>
#include <bitset>
#include <cstring>
#include <cmath>
#include <typeinfo>
using namespace std;

int main(){
    int x;
    float f;
    double d;

    x=pow(2,31)-1;
    f = (float)x;
    cout << (x==(int)f) << endl;

    // auto c = f+d;
    // cout << typeid(c).name()<<endl;//output "d", what does it mean? double

    // cout << (f==-(-f)) << endl;
    return 0;
}