#include <iostream>

using namespace std;

int main(void)
{
    int num = 304312;
    int dec = 10;
    int digit = 0;
    while(num)
    {
        num /= dec;
        digit++;
    }
    cout << digit << endl;
    return 0;

}
