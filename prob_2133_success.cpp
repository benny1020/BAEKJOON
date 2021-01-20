#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int * D = new int[n+1];

    if(n == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    if( n== 2)
    {
        cout << 3 << endl;
        return 0;
    }
    if(n==3)
    {
        cout << 0 << endl;
        return 0;
    }
    if(n == 4)
    {
        cout << 11 << endl;
        return 0;
    }
    D[0] = 1;
    D[1] = 0;
    D[2] = 3;
    D[3] = 0;
    D[4] = 11;
    for(int i=5; i<n+1;i++)
    {
        D[i] = D[i-2]*3;
        for(int j=i-4;j>=0;j-=2)
            D[i]+=(D[j]*2);
    }
    cout << D[n] << endl;
    return 0;
}
