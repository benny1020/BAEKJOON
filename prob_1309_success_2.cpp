#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int ** D = new int*[n+1];
    for(int i=0;i<n+1;i++)
        D[i] = new int[3];
    D[0][0]=0;
    D[0][1]=0;
    D[0][2]=0;
    D[1][0] = 1;
    D[1][1] = 1;
    D[1][2] = 1;

    for(int i=2;i<n+1;i++)
    {
        D[i][0] = (D[i-1][0] + D[i-1][1] + D[i-1][2])%9901;
        D[i][1] = (D[i-1][0] + D[i-1][2])%9901;
        D[i][2] = (D[i-1][0] + D[i-1][1])%9901;
    }
    cout << (D[n][0] + D[n][1] + D[n][2])%9901 << endl;
    return 0;
}
