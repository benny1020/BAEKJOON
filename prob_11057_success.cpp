#include <iostream>

using namespace std;

int main(void)
{
    int n;
    int total=0;
    cin >> n;
    int ** D = new int*[n+1];
    for(int i=0;i<n+1;i++)
        D[i] = new int[10];
    for(int i=0;i<10;i++)
        D[1][i]=1;

    for(int i=2;i<n+1;i++)
        for(int j=0;j<10;j++)
        {
            D[i][j] = 0;
        }
    for(int i=2;i<n+1;i++)
    {
        for(int j=0;j<10;j++)
        {
            for(int k=0;k<=j;k++)
                D[i][j] +=(D[i-1][k]%10007);
        }
    }

    for(int i=0;i<10;i++)
        total+=D[n][i];
    cout << total%10007 << endl;
    return 0;

}
