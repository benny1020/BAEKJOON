#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int gcd(long long int a, long long int b)
{
    if(b == 0)
        return a;

    return gcd(b, a%b);
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int maxx;
    int temp;
    long long int n, s;
    cin >> n >> s;
    long long int * arr = new long long int[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        arr[i] = abs(arr[i] - s);
    }
    maxx=arr[0];

    for(int i=1;i<n;i++)
    {
        maxx = gcd(maxx, arr[i]);
    }
    cout << maxx << '\n';
    return 0;
}
