#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
typedef unsigned char *byte_pointer;
/*
In C and C++, unsigned char is commonly used to represent bytes because it ensures that 
each byte can hold values ranging from 0 to 255, which covers the full range of possible 
byte values without any negative values.

In the show_bytes function, the byte_pointer is used to iterate over the memory bytes starting
from the given start address and printing out their hexadecimal representation. Since the memory 
bytes are treated as raw data, they are printed as unsigned hexadecimal values.

The actual size of size_t varies depending on the system and compiler being used. On most modern 
systems, size_t is typically defined as an unsigned long or unsigned long long, but it can be 
different on some platforms.
*/

void show_bytes(byte_pointer start, size_t len){
    size_t i;
    for(i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

void show_int(int x){
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x){
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x)
{
    show_bytes((byte_pointer) &x, sizeof(void *));
}

void test_show_bytes(int val){
    int ival = val;
    float fval = (float)ival;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);

}
void inplace_swap(int *x, int *y)
{
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;

    cout << *x << "," << *y;
}

int main()
{
    //test_show_bytes(12345);
    const char *s = "12345";
    show_bytes((byte_pointer)&s, strlen(s));
    const char *s2 = "abcdef";
    show_bytes((byte_pointer)&s2, strlen(s2));
    int x1=1, x2=2;
    int *x3, *x4;
    x3 = &x1;
    x4 = &x2;
    inplace_swap(x3,x4);
    return 0;
}