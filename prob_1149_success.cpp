#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    int ** arr = new int*[N];
    int ** D = new int*[N];
    for(int i=0;i<N;i++)
    {
        arr[i] = new int[3];
        D[i] = new int[3];
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<3;j++)
            cin >> arr[i][j];
    }
    D[0][0] = arr[0][0];
    D[0][1] = arr[0][1];
    D[0][2] = arr[0][2];
    for(int i=1;i<N;i++)
    {
        D[i][0] = min(D[i-1][1]+arr[i][0], D[i-1][2]+arr[i][0]);
        D[i][1] = min(D[i-1][0]+arr[i][1], D[i-1][2]+arr[i][1]);
        D[i][2] = min(D[i-1][1]+arr[i][2], D[i-1][0]+arr[i][2]);
    }
    if(min(D[N-1][0],D[N-1][1]) > D[N-1][2])
        cout << D[N-1][2] << endl;
    else
        cout << min(D[N-1][0],D[N-1][1]) << endl;

    return 0;
}
