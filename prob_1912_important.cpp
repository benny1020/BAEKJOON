#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int num;
    int maxx;
    cin >> num;
    int * arr = new int[num];
    int * dp = new int[num];
    for(int i=0;i<num;i++)
        cin >> arr[i];
    dp[0]=arr[0];
    for(int i=1;i<num;i++)
    {
        dp[i] = max(dp[i-1] + arr[i],arr[i]);
    }
    maxx = -1000;
    for(int i=0;i<num;i++)
        maxx = max(dp[i],maxx);
    cout << maxx << endl;
}
