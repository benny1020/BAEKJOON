#include <iostream>
#define MAX_NUM 1000001
using namespace std;

int main(void)
{
    long long int maxx = 1000000009;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num, temp;
    long long int * arr = new long long int[MAX_NUM];
    arr[0]=0;
    arr[1]=1;
    arr[2]=2;
    arr[3]=4;
    for(int i=4; i<MAX_NUM;i++)
        arr[i]=(arr[i-1]%maxx+arr[i-2]%maxx+arr[i-3]%maxx)%maxx;
    cin >> num;
    for(int i=0;i<num;i++)
    {
        cin >> temp;
        cout <<arr[temp]<<'\n';
    }
    return 0;
}
