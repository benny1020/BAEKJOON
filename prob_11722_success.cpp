#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int num;
    int maxx;
    cin >> num;
    int * arr = new int[num];
    int * D = new int[num];
    for(int i=0;i<num;i++)
        cin >> arr[i];
    D[0] = 1;

    for(int i=1;i<num;i++)
    {
        maxx = 1;
        for(int j=0;j<i;j++)
        {
            if(arr[j] > arr[i])
                maxx = max(D[j]+1, maxx);
        }
        D[i] = maxx;
    }
    maxx = 0;
    for(int i=0;i<num;i++)
    {
        maxx = max(D[i],maxx);
    }
    cout << maxx <<endl;
    return 0;
}
