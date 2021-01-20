#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int * arr = new int[n];
    int ** D = new int*[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        D[i] = new int[3];
    }
    // 0 -> 안마심 1 -> 첫번째로 마심 2 -> 두번째로마심
    if(n==1)
    {
        D[0][0] = 0;
        D[0][1] = arr[0];
        D[0][2] = arr[0];
    }
    else
    {
        D[0][0] = 0;
        D[0][1] = arr[0];
        D[0][2] = arr[0];
        D[1][0] = arr[0];
        D[1][1] = arr[1];
        D[1][2] = arr[0] + arr[1];
    }

    for(int i=2;i<n;i++)
    {
        D[i][0] = max(max(D[i-1][1],D[i-1][0]),D[i-1][2]);
        D[i][1] = D[i-1][0] + arr[i];
        D[i][2] = D[i-1][1] + arr[i];
    }
    cout << max(max(D[n-1][0],D[n-1][1]),D[n-1][2]) << endl;
    return 0;

}
