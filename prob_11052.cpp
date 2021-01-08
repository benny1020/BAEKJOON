#include <iostream>

using namespace std;

int main(void)
{
    int num;
    int max;
    int temp;
    int * arr = new int[num+1];
    cin >> num;
    for(int i=1;i<=num;i++)
    {
        cin >> temp;
        arr[i] = temp;
    }
    int * charge = new int[num+1];

    charge[1] = arr[1];
    for(int i=2;i<=num;i++)
    {
        charge[i]=0;
    }

    for(int i=2;i<=num;i++)
    {
        max=0;
        for(int j=1;j<=i-1;j++)
        {
            if(max < (charge[j] + charge[i-j]))
                max = charge[j]+charge[i-j];
            if(j>i-j)
                break;
        }
        if(max < arr[i])
            max = arr[i];
        charge[i] = max;
    }
    cout << charge[num] << '\n';
    return 0;
}
