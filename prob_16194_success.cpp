#include <iostream>

using namespace std;

int main(void)
{
    int num,min;
    cin >> num;
    int * arr = new int[num+1];
    int * charge = new int[num+1];
    for(int i=1;i<=num;i++)
    {
        cin >> arr[i];
    }
    charge[1] = arr[1];
    for(int i=2;i<=num;i++)
    {
        min = arr[i];
        for(int j=1;j<=i;j++)
        {
            if(j>i-j) //반복
                break;
            if(min > charge[j]+charge[i-j] )
                min = charge[j]+charge[i-j];
        }
        charge[i]=min;
    }
    cout << charge[num] << '\n';
    return 0;
}
