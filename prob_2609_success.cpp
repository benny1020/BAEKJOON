#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if(b==0)    return  a;
    else    return gcd(b, a%b);
}

int main(void)
{
    int a, b;
    cin >> a >> b;
    int ab_gcd = gcd(a,b);
    int l=ab_gcd*(a/ab_gcd)*(b/ab_gcd);
    cout << ab_gcd <<'\n' << l << '\n';
    return 0;
}
