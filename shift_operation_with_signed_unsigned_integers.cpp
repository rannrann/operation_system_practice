#include <stdio.h>
#include <string.h>
#include <iostream>
#include <bitset>
using namespace std;


int fun1(unsigned word)
{
    return (int) ((word << 24) >> 24);
}

int fun2(unsigned word)
{
    return ((int) word << 24) >> 24;
}
int main()
{

    unsigned int w = 0x00000076;
    cout << "w = 0x00000076, fun1(w) = " << hex << fun1(w) << ", fun2(w) = " << hex << fun2(w) << endl;
    w = 0x87654321;
    cout << "w = 0x87654321, fun1(w) = " << hex << fun1(w) << ", fun2w) = " << hex << fun2(w) << endl;
    w = 0x000000c9;
    cout << "w = 0x000000c9, fun1(w) = " << hex << fun1(w) << ", fun2(w) = " << hex << fun2(w) << endl;
    w = 0xedcba987;
    cout << "w = 0xedcba987, fun1(w) = " << hex << fun1(w) << ", fun2(w) = " << hex << fun2(w) << endl;

    int x = -8; // Binary: 11111111 11111111 11111111 11111000

    // Right shift x by 1
    int result = x >> 1;

    // Output the result
    cout << "Result: " << result << endl;
    cout << bitset<sizeof(int)*8>(result) << endl; // sizeof(int) = 4 11111111 11111111 11111111 11111100

    return 0;  
}