#include <iostream>

using namespace std;

long long int factorial(long long int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    else
        return n * factorial(n-1);
}
int main(void)
{
    long long int num;
    cin >> num;
    cout << factorial(num) << '\n';
    return 0;
}
