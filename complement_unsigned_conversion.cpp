#include <stdio.h>
#include <string.h>
#include <iostream>
#include <bitset>
using namespace std;
int main() {
//    int signedNum = -2147483648; // 使用signed char来模拟4位系统

//     unsigned int unsignedNum = static_cast<unsigned int>(signedNum); // 将有符号数转换为无符号数
    
//     std::cout << pow(2,16) << std::endl;
//     std::cout << "Signed number: " << signedNum << std::endl; // 输出有符号数，可能需要转换为int以避免符号扩展
//     std::cout << "Unsigned number: " << unsignedNum << std::endl; // 输出无符号数
    cout << (-2147483647-1 == 2147483648U) << endl;
    cout << (-2147483647-1 < 2147483647) << endl;
    cout << (-2147483647-1U < 2147483647) << endl;
    cout << (-2147483647-1 < -2147483647) << endl;
    cout << (-2147483647-1U < -2147483647) << endl;
    int x = 0xc3;
    bitset<32> binary(x);
    cout << binary << endl;
    cout << bitset<32>(x << 3) << endl;

    return 0;
}