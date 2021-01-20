#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int total= -1000;
    int * arr = new int[n];
    int * left = new int[n];
    int * right = new int[n];

    for(int i=0;i<n;i++)
        cin >> arr[i];
    left[0] = arr[0];
    if( n == 1)
    {
        cout << arr[0]<<endl;
        return 0;
    }
    for(int i=1;i<n;i++)
    {
        left[i] = max(left[i-1] + arr[i],arr[i]);
    }
    right[n-1] = arr[n-1];

    for(int i=n-2; i>=0;i--)
    {
        right[i] = max(right[i+1]+arr[i], arr[i]);
    }

    for(int i=0;i<n;i++)
        total = max(left[i], total);

    for(int i=1;i<n-1;i++)
        total = max(left[i-1]+right[i+1], total);


    cout << total <<'\n';
    return 0;
}
