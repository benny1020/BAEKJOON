#include <iostream>
using namespace std;

int main(void)
{
    int num;
    int max;
    cin >> num;
    int * arr = new int[num];
    int * check = new int[num];

    for(int i=0;i<num;i++)
        cin >> arr[i];
    max = 0;
    check[0]=1;
    for(int i=1;i<num;i++)
    {
        max = 1;
        for(int j=0;j<i;j++)
        {
            if(arr[j] < arr[i])
            {
                if(max < check[j]+1)
                    max = check[j]+1;
            }
        }

        check[i] = max;
    }
    max = 0;
    for(int i=0;i<num;i++)
    {
        if(check[i] > max )
            max = check[i];
    }
    cout << max << endl;

    return 0;
}
