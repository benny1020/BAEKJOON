#include <iostream>
#include <cmath>
#define MAX_NUM 100000
using namespace std;

int main(void)
{
    int num;
    int end;
    int count =0;
    int temp;
    int * arr = new int[MAX_NUM];

    cin >> num;
    end = (int)sqrt(num);
    for(int i=1;i<MAX_NUM;i++)
    {

        count = 0;
        temp = i;
        while(temp !=0)
        {
            end = (int)sqrt(temp);
            temp = temp - end*end;
            count++;
        }
        arr[i] = count;
    }

    for(int i=1;i<MAX_NUM;i++)
    {
        if(arr[i] != 1)
        {
            for(int j=1;j<i;j++)
            {
                if(j>i-j)
                    break;
                if(arr[j]+arr[i-j] < arr[i])
                {
                    arr[i] = arr[j]+arr[i-j];
                }
            }
        }

    }
    cout << arr[num] <<endl;
    return 0;

}
