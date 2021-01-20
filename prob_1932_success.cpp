#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    int maxx=0;
    cin >> n;

    int ** arr = new int*[n+1];
    int ** D = new int*[n+1];
    for(int i=1;i<=n;i++)
    {
        arr[i] = new int[i];
        D[i] = new int[i];
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
            cin >> arr[i][j];
    }
    D[1][0] = arr[1][0];
    D[2][0] = arr[1][0] + arr[2][0];
    D[2][1] = arr[1][0] + arr[2][1];

    for(int i=3;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(j==0)
                D[i][j]=D[i-1][0]+arr[i][0];
            else if(j==i-1)
                D[i][j] = D[i-1][i-2]+arr[i][j];
            else
            {
                D[i][j] = max(D[i-1][j-1]+arr[i][j],D[i-1][j]+arr[i][j]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(maxx < D[n][i])
            maxx = D[n][i];
    }
    cout << maxx << endl;


    return 0;
}
