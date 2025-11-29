#include <cstdint>
#include <iostream>
#include <bitset>
#include <cstring>
#include <cmath>
#include <typeinfo>
using namespace std;

int main()
{
    int x = 7;
    int shift_val = (sizeof(int) - 1) << 3;
    cout << sizeof(int) << endl;//4 因为int最大为32位，1字节=8位，所以返回4字节数
    cout << shift_val <<endl; // 24 3(0011)<<3  -> 0011000=16+8=24
    int xright = x >> shift_val;// 右移24位 会保留8个最高有效位
    cout << (xright & 0xFF); // 如果最高有效位为1结果为1， 如果最高有效位为0结果为0
    return 0;
}