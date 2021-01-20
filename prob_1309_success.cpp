#include <iostream>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    int ** D = new int*[N+1];
    for(int i=0;i<N+1;i++)
        D[i] = new int[3];
    D[1][0] = 1;
    D[1][1] = 1;
    D[1][2] = 1;
    for(int i=2;i<N+1;i++)
    {
        D[i][0] = (D[i-1][0] + D[i-1][1] + D[i-1][2])%9901;
        D[i][1] = (D[i-1][0] + D[i-1][2])%9901;
        D[i][2] = (D[i-1][0] + D[i-1][1])%9901;
    }
    cout << (D[N][0] + D[N][1] + D[N][2]) % 9901 << endl;

    return 0;
}
