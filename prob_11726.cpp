#include <iostream>

using namespace std;
long long int factorial(long long int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    else
        return (n%10007)*factorial(n-1);
}

long long int p_factorial(long long int n, long long int k)
{
    if(n==k)
        return 1;
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    else
        return (n%10007)*p_factorial(n-1,k);
}

int main(void)
{
    long long int num;
    long long int temp;
    long long int total=0;
    long long int one;
    cin >> num;
    long long int max_two = num/(long long int)2;
    for(long long int i=0;i<=max_two;i++)
    {
        one = num-i*2;
        temp = p_factorial(one+i,one)%10007;
        temp = temp/(factorial(i)%10007);
        total += temp;
        total = total%10007;
    }
    cout << total << '\n';
    return 0;

}
