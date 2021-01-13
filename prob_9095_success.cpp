#include <iostream>
#define MAX_NUM 11
using namespace std;



int main(void)
{
    int arr[MAX_NUM] = {0, };
    int temp, num;
    arr[1]=1;
    arr[2]=2;
    arr[3]=4;
    arr[4]=7;

    for(int i=4;i<=MAX_NUM;i++)
    {
        arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
    }

    cin >> num;
    for(int i=0;i<num;i++)
    {
        cin >> temp;
        cout << arr[temp] << '\n';
    }
    return 0;
}
