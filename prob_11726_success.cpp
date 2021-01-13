#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int * check = new int[n+1];

    check[0] = 0;
    check[1] = 1;
    check[2] = 2;

    for(int i=3;i<=n;i++)
    {
        check[i] = (check[i-1])%10007 + (check[i-2])%10007;
    }
    cout << check[n]%10007 << endl;
    return 0;
}
