#include <iostream>
#define MAX_NUM 1000000009
using namespace std;

int main(void)
{
    long long int num = 100000;
    long long int num2;
    long long int temp;
    cin >> num2;

    long long int ** arr= new long long int * [num+1];
    for(long long int i=0;i<num+1;i++)
        arr[i] = new long long int[4];
    arr[1][1] = 1;
    arr[1][2] = 0;
    arr[1][3] = 0;

    arr[2][1] = 0;
    arr[2][2] = 1;
    arr[2][3] = 0;

    arr[3][1] = 1;
    arr[3][2] = 1;
    arr[3][3] = 1;

    for(long long int i=4;i<=num;i++)
    {
        arr[i][1] = (arr[i-1][2] + arr[i-1][3]) % MAX_NUM;
        arr[i][2] = (arr[i-2][1] + arr[i-2][3]) % MAX_NUM;
        arr[i][3] = (arr[i-3][1] + arr[i-3][2]) % MAX_NUM;
    }
    for(long long int i=0;i<num2;i++)
    {
        cin >> temp;
        cout << (arr[temp][1]+arr[temp][2]+arr[temp][3])%MAX_NUM << '\n';
    }
    return 0;
}
