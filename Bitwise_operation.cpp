#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
void inplace_swap(int *x, int *y)
{
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;

    //cout << *x << "," << *y;
}
void reverse_array(int a[], int cnt)
{
    int first, last;
    for(first = 0, last = cnt - 1; first <= last; first++, last--)
    {
        cout << "first = " << first << "," << "last = " << last << endl;
        inplace_swap(&a[first], &a[last]);
    }
}

int main()
{
    // int x1=2, x2=2;
    // int *x3, *x4;
    // x3 = &x1;
    // x4 = &x2;
    // inplace_swap(x3,x4);

    // int numbers[5] = {1, 2, 3, 4, 5};
    // reverse_array(numbers, 5);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << numbers[i] << endl;
    // }
    

    // int x = 0x87654321;
    // int b = x & 0xFF; //0x21 = 2*16 + 1*1 = 33(十进制) 
    // b = x ^ 0xFFFFFFFF ^ 0xFF;
    // b = x | 0xFF;
    // b = !0x41;
    // cout << hex << b << endl;

    int x = 0x66, y = 0x39;
    cout << "x & y = " << hex << (x & y) << endl;
    cout << "x | y = " << hex << (x | y) << endl;
    cout << "~x | ~y = " << hex << (~x | ~y) << endl;
    cout << "x & !y = " << hex << (x & !y) << endl;
    cout << "x && y = " << hex << (x && y) << endl;
    cout << "x || y = " << hex << (x || y) << endl;
    cout << "!x || !y = " << hex << (!x || !y) << endl;
    cout << "x && ~y = " << hex << (x && ~y) << endl;
    int x1 = x, y1 = y;
    int is_equal = !(x1 ^ y1);
    cout << "x == y : " << hex << is_equal << endl;
    y1 = x;
    is_equal = !(x1 ^ y1);
    cout << "x == y : " << hex << is_equal << endl;

    return 0;
}