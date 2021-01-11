#include <iostream>
#define MAX_NUM 1000000000
using namespace std;

int main(void)
{
    int n, k;
    cin >> n >> k;
    long long int ** arr = new long long int*[k+1];
    for(int i=0;i<k+1;i++)
        arr[i] = new long long int[n+1];
    for(int i=0;i<n+1;i++)
    {
        arr[0][i] = 0;
        arr[1][i] = 1;
    }
    for(int i=0;i<k+1;i++)
    {
        arr[i][0] =1;
    }
    for(int i=2;i<k+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            arr[i][j] = 0;
            for(int p=0;p<=j;p++)
            {
                arr[i][j] += (arr[i-1][p]%MAX_NUM);
            }
        }
    }
    cout << arr[k][n]%MAX_NUM << endl;
    return 0;
}
