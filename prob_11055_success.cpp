#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    int maxx;
    cin >> n;
    int * arr = new int[n];
    int * D = new int[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }


    D[0] = arr[0];

    for(int i=1;i<n;i++)
    {
        maxx = arr[i];
        for(int j=0;j<i;j++)
        {
            if(arr[j] < arr[i])
                maxx = max(D[j] + arr[i], maxx);
        }
        D[i] = maxx;
    }
    maxx=0;
    for(int i=0;i<n;i++)
    {
        maxx = max(D[i],maxx);
    }
    cout << maxx << endl;
    return 0;
}
