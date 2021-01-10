#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    int num, max, idx;
    cin >> num;
    int * arr = new int[num];
    int * check = new int[num];
    int ** sequence = new int*[num];

    for(int i=0;i<num;i++)
    {
        sequence[i] = new int[num];
    }
    for(int i=0;i<num;i++)
        cin >> arr[i];

    check[0] = 1;
    sequence[0][0]=arr[0];

    for(int i=1;i<num;i++)
    {
        max = 1;
        for(int j=0;j<i;j++)
        {
            if(arr[j] < arr[i])
            {
                if(max < check[j] + 1)
                {
                    max = check[j]+1;
                    idx = j;
                }
            }
        }
        check[i] = max;
        if(max == 1)
        {
            sequence[i][0]=arr[i];
        }
        else
        {
            for(int n=0;n<max-1;n++)
            {
                sequence[i][n] = sequence[idx][n];
            }
            sequence[i][max-1] = arr[i];
        }
    }
    max = 0;
    for(int i=0;i<num;i++)
    {
        if(max < check[i])
        {
            max = check[i];
            idx = i;
        }
    }
    cout << max << endl;
    for(int i=0;i<max;i++)
        cout << sequence[idx][i] << ' ';
    cout << endl;
    return 0;
}
