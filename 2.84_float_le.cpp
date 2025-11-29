#include <cstdint>
#include <iostream>
#include <bitset>
#include <cstring>
using namespace std;

unsigned f2u(float f)
{
    unsigned u;
    memcpy(&u, &f, sizeof(float));
    return u;
}

int float_le(float x, float y){
    unsigned ux = f2u(x);
    unsigned uy = f2u(y);
    cout << "ux="<<ux<<",uy="<<uy<<endl;
    unsigned sx = ux>>31;
    unsigned sy = uy>>31;
    return 1;
}

int main()
{
    float x=1, y=2;
    float_le(x,y);
    return 0;
}
