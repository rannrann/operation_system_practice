#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

void shift_operation(char c, int x)
{
    cout << c <<" << 3 = " << hex << (x << 3) << ", " << c << " >> 2 = " << hex << (x >> 2) << endl;
}





int main()
{
    int a = 0xC3, b = 0x75, c = 0x87, d = 0x66;
    shift_operation('a', a);
    shift_operation('b', b);
    shift_operation('c', c);
    shift_operation('d', d);



    return 0;  
}