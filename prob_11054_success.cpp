#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int num;
    int maxx;
    cin >> num;
    int * arr = new int[num];
    for(int i=0;i<num;i++)
        cin >> arr[i];
    int * asc = new int[num];
    int * dsc = new int[num];

    asc[0]=1;
    for(int i=1;i<num;i++)
    {
        maxx=1;
        for(int j=0;j<i;j++)
            if(arr[j]<arr[i])
                maxx = max(maxx, asc[j]+1);
        asc[i] = maxx;
    }
    for(int i=num-1;i>=0;i--)
    {
        maxx=1;
        for(int j=num-1;j>i;j--)
            if(arr[j]<arr[i])
                maxx = max(maxx, dsc[j]+1);
        dsc[i] = maxx;
    }
    maxx=0;
    for(int i=0;i<num;i++)
        maxx = max(maxx,asc[i]+dsc[i]);
    cout << maxx-1 << endl;
    return 0;
}
