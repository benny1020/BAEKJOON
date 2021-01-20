#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int * arr = new int[9];
    int * final = new int[7];
    int total = 0;
    int a, b;
    for(int i=0;i<9;i++)
    {
        cin >> arr[i];
        total+=arr[i];
    }
    total -= 100;
    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<9;j++)
        {
            if(arr[i]+arr[j] == total)
            {
                a=i;
                b=j;
                break;
            }
        }
    }
    int j=0;
    for(int i=0;i<9;i++)
    {
        if(i!=a && i!=b)
        {
            final[j++] = arr[i];
        }
    }
    sort(final,final+7);
    for(int i=0;i<7;i++)
        cout <<final[i]<<endl;

    return 0;
}
