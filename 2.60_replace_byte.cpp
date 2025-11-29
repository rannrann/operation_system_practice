#include <cstdint>
#include <iostream>
#include <bitset>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <typeinfo>
using namespace std;

// unsigned replace_byte(unsigned x, int i, unsigned char b){
//     int mask = 0xFF;
//     mask = mask << (i*8);
//     cout << hex << mask << endl;
//     mask = ~mask;
//     mask = x & mask;
//     mask = mask | (b << (i*8));
//     return mask;
// }
//看看人家写的
unsigned int replace_byte(unsigned int x, int i, unsigned char b) {
    // 1. Create the Byte Mask (0xFF) and shift it to the target position i.
    //    Example: If i=2, mask_clear_byte = 0x00FF0000
    unsigned int byte_mask = 0xFF; 
    unsigned int shifted_mask = byte_mask << (i * 8);

    // 2. Create the CLEAR MASK: Flip all bits (~) so that only the target byte is 0x00.
    //    Example: If i=2, clear_mask = ~0x00FF0000 = 0xFF00FFFF
    unsigned int clear_mask = ~shifted_mask;

    // 3. Create the NEW VALUE: Shift the replacement byte 'b' to the target position i.
    //    Example: If i=2, b=0xAB. shifted_new_byte = 0x00AB0000
    unsigned int shifted_new_byte = (unsigned int)b << (i * 8);

    // 4. COMBINE:
    //    a) Clear the target byte in x using AND with the clear_mask.
    //    b) Place the new byte using OR with the shifted_new_byte.
    
    // Result = (Original cleared) OR (New byte in place)
    return (x & clear_mask) | shifted_new_byte;
}
int main()
{
    cout << hex << replace_byte(0x12345678, 2, 0xAB);
    return 0;
}