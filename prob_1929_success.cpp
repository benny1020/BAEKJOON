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
    int a, b;
    cin >> a >> b;
    bool * check = new bool[b+1];
    for(int n=0;n<=b;n++)
        check[n] = true;
    check[0]=false;
    check[1]=false;
    for(int i=2;i<=b;i++)
    {
        if(i*i > b) break;
        if(check[i]==true)
        {
            for(int j=2;j<=1000000;j++)
            {
                if(i*j > b)
                    break;
                check[i*j]=false;
            }
        }

    }
    for(int k=a;k<=b;k++)
        if(check[k] == true)    cout << k << '\n';
    return 0;

}
