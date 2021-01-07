#include <iostream>

using namespace std;

int is_prime(int x)
{
    if(x==1)
        return 0;
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}

int main(void)
{
    int num;
    int total = 0;
    cin >> num;
    int arr[num];
    for(int i=0;i<num;i++)
    {
        cin >> arr[i];
        if(is_prime(arr[i]) == 1)
            total++;
    }
    cout << total << '\n';

    return 0;
}
