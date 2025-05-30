#include <cstdint>
#include <iostream>
#include <bitset>
using namespace std;
int main() {

    //32位数和64位数
    int32_t a = 2147483647;  // 32-bit integer
    int64_t b = 9223372036854775807LL;  // 64-bit integer

    cout << "32-bit int: " << a << endl;
    cout << "64-bit int: " << b << endl;

    //转换成二进制
    bitset<32> binary32(a);
    bitset<64> binary64(b);

    cout << "32-bit in a binary system: " << binary32 << endl;
    cout << "64-bit in a binary system: " << binary64 << endl;

    //左移和右移
    cout << "Left shift a 32-bit variable by 3 digits: " << (binary32 << 3) << endl;
    cout << "Right shift a 32-bit variable by 3 digits: " << (binary32 >> 3) << endl;//Logical Right Shift
    cout << "Left shift a 64-bit variable by 3 digits: " << (binary64 << 3) << endl;
    cout << "Right shift a 64-bit variable by 3 digits: " << (binary64 >> 3) << endl;//Logical Right Shift

    //转换成十进制
    uint32_t unsigned_a = binary32.to_ulong(); //无符号数
    int32_t signed_a = static_cast<int32_t>(unsigned_a); //有符号数

    return 0;
}
