#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if(b == 0)
        return a;

    return gcd(b, a%b);
}

int main(void)
{
    int num, temp;
    long long int total=0;
    cin >> num;
    for(int i=0;i<num;i++)
    {
        cin >> temp;
        int * arr = new int[temp];
        for(int j=0;j<temp;j++)
        {
            cin >> arr[j];
        }
        for(int k=0;k<temp-1;k++)
        {
            for(int n=k+1;n<temp;n++)
            {
                total +=gcd(arr[k],arr[n]);
            }
        }
        cout << total << endl;
        delete[] arr;
        total = 0;
    }
    return 0;
}
