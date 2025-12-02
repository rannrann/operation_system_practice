#include <iostream>
#include <iomanip>
using namespace std;
int odd_ones(unsigned x)
{   
    int count = 0;
    while(x > 0)
    {
        int reminder  = x % 2;
        if(reminder == 1)
            count++;
        x /= 2;
    }
    return (count % 2 == 0)? 0:1;
}
int main ()
{
    cout << odd_ones(5);
    return 0;
}