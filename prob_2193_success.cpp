#include <iostream>

using namespace std;

int main(void)
{
    long long int arr[91][2];
    long long int num;
    arr[1][0]=0;
    arr[1][1]=1;
    for(long long int i=2;i<=90;i++)
    {
        arr[i][0] = arr[i-1][0]+arr[i-1][1];
        arr[i][1] = arr[i-1][0];
    }
    cin >> num;
    cout << arr[num][0] + arr[num][1] << endl;
    return 0;
}
