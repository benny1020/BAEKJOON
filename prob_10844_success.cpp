#include <iostream>
#include <cstring>
#define MAX_NUM 1000000000
using namespace std;

int main(void)
{
    long long int arr[101][10];
    long long int num;
    long long int total = 0;
    for(long long int i=0;i<10;i++)
        arr[1][i]=1;
    arr[1][0]=0;
    for(long long int i=2;i<=100;i++)
        memset(arr[i], 0 , sizeof(long long int)*10);

    for(long long int i=1;i<=99;i++)
    {
        for(long long int j=0;j<10;j++)
        {
            if(j==0)
            {
                arr[i+1][j+1] += ((arr[i][j])%MAX_NUM);
            }
            else if(j==9)
            {
                arr[i+1][j-1] += ((arr[i][j])%MAX_NUM);
            }
            else
            {
                arr[i+1][j+1] += ((arr[i][j])%MAX_NUM);
                arr[i+1][j-1] += ((arr[i][j])%MAX_NUM);
            }
        }

    }
    cin >> num;
    for(long long int i=0;i<10;i++)
        total+=(arr[num][i]%MAX_NUM);
    total %=MAX_NUM;
    cout << total <<endl;

    return 0;

}
