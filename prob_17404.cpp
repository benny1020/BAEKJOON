#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    int total1=-9999;
    int total2=-9999;
    int total3=-9999;
    int final=-9999;
    cin >> n;
    int ** arr = new int*[n+1];
    int ** D = new int*[n+1];
    for(int i=1;i<n+1;i++)
    {
        arr[i] = new int[3];
        D[i] = new int[3];
    }
    for(int i=1;i<n+1;i++)
        for(int j=0;j<3;j++)
            cin >> arr[i][j];
    if(n==2)
    {
        final = min(arr[1][0] + arr[2][1],arr[1][0]+arr[2][2]);
        final = min(arr[1][1]+arr[2][0],final);
        final = min(arr[1][1]+arr[2][2],final);
        final = min(arr[1][2]+arr[2][0],final);
        final = min(arr[1][2]+arr[2][1],final);
        cout <<final << endl;
        return 0;
    }
    if(n==3)
    {
        final = min(arr[1][0]+arr[2][1]+arr[3][2],arr[1][0]+arr[2][2]+arr[3][1]);
        final = min(arr[1][1]+arr[2][0]+arr[3][2], final);
        final = min(arr[1][1]+arr[2][2]+arr[3][0], final);
        final = min(arr[1][2]+arr[2][0]+arr[3][1], final);
        final = min(arr[1][2]+arr[2][1]+arr[3][0], final);
        cout << final<<endl;
        return 0;
    }
    D[1][0] = arr[1][0];
    D[1][1] = arr[1][1];
    D[1][2] = arr[1][2];
    //1번집을 0으로 고정
    D[2][1] = D[1][0] + arr[2][1];
    D[2][2] = D[1][0] + arr[2][2];
    D[3][0] = min(D[2][1],D[2][2])+arr[3][0];
    D[3][1] = D[2][2] + arr[3][0];
    D[3][2] = D[2][1] + arr[3][0];
    for(int i=4;i<n;i++)
    {
        D[i][0] = min(D[i-1][1]+arr[i][0],D[i-1][2]+arr[i][0]);
        D[i][1] = min(D[i-1][0]+arr[i][1],D[i-1][2]+arr[i][1]);
        D[i][2] = min(D[i-1][0]+arr[i][2],D[i-1][1]+arr[i][2]);
    }
    D[n][1] = min(D[n-1][0],D[n-1][2])+arr[n][1];
    D[n][2] = min(D[n-1][0],D[n-1][1])+arr[n][2];
    total1 = min(D[n][1],D[n][2]);
    //1번집을 1로 고정
    D[2][0] = D[1][1] + arr[2][0];
    D[2][2] = D[1][1] + arr[2][2];
    D[3][0] = D[2][2] + arr[3][0];
    D[3][1] = min(D[2][2],D[2][0]) + arr[3][1];
    D[3][2] = D[2][0] + arr[3][2];
    for(int i=4;i<n;i++)
    {
        D[i][0] = min(D[i-1][1]+arr[i][0],D[i-1][2]+arr[i][0]);
        D[i][1] = min(D[i-1][0]+arr[i][1],D[i-1][2]+arr[i][1]);
        D[i][2] = min(D[i-1][0]+arr[i][2],D[i-1][1]+arr[i][2]);
    }
    D[n][0] = min(D[n-1][1],D[n-1][2]) + arr[n][0];
    D[n][2] = min(D[n-1][0],D[n-1][1]) + arr[n][2];
    total2 = min(D[n][0],D[n][2]);
    //1번집을 2로 고정
    D[2][0] = D[1][2] + arr[2][0];
    D[2][1] = D[1][2] + arr[2][2];
    D[3][0] = D[2][1] + arr[3][0];
    D[3][1] = D[2][0] + arr[3][1];
    D[3][2] = min(D[2][0] + arr[3][2],D[2][1]+arr[3][2]);
    for(int i=4;i<n;i++)
    {
        D[i][0] = min(D[i-1][1]+arr[i][0],D[i-1][2]+arr[i][0]);
        D[i][1] = min(D[i-1][0]+arr[i][1],D[i-1][2]+arr[i][1]);
        D[i][2] = min(D[i-1][0]+arr[i][2],D[i-1][1]+arr[i][2]);
    }
    D[n][1] = min(D[n-1][0],D[n-1][2]) + arr[n][1];
    D[n][0] = min(D[n-1][1],D[n-1][2]) + arr[n][0];
    total3 = min(D[n][1],D[n][0]);

    final = min(total1,total2);
    final = min(final,total3);
    // 0 1
    // 0 2
    // 1 0
    // 1 2
    // 2 0
    // 2 1
    cout << final << endl;
    return 0;

}
