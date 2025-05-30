#include <cstdint>
#include <iostream>
#include <bitset>
using namespace std;


int div16(uint32_t x){
    uint32_t bias = (x >> 31) & 0xF;
    return (x+bias)>>4;
}
int div16(uint32_t x){
    if(x >= 0)
        return x>>4;
    else
        return (x + (1 << 4) - 1) >> 4; 
}
int main()
{
    uint32_t x = 16;
    cout<<div16(x);
    return 0;
}