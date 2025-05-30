#include <cstdint>
#include <iostream>
#include <bitset>
using namespace std;
/* Determine whether arguments can be multiplied without overflow */
int tmult_ok(int x, int y)
{
    int p = x*y;
    return !x || p/x==y;
}

/*For a 32-bit system, design a new version that does not use division by a 64-bit int64_t.*/
int tmult_ok2(int32_t x, int32_t y)
{
    int64_t p = x*y;
    bitset<64> binary_p(p);
    int64_t shift_num = (y%2==0)? y:y+1;
    bitset<64> aftershift = binary_p >> shift_num;
    uint64_t unsigned_aftershift = aftershift.to_ulong();
    int64_t signed_aftershift = static_cast<int64_t>(unsigned_aftershift);
    return !x || signed_aftershift==y;
}

int tmulk_ok(int x, int y)
{
    int64_t pll = (int64_t)x*y;
    return pll == (int)pll;
}
int main()
{
    cout << tmult_ok2(0, 2147483647) << endl;
    cout << tmult_ok2(2147483647, 0) << endl;
    cout << tmult_ok2(-2147483648, -1) << endl;
    cout << tmult_ok2(2147483647, 3) << endl;
    return 0;
}