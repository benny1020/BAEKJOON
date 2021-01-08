#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    long long n, m;
    long long total_n_five = 0;
    long long total_m_five = 0;
    long long total_n_two = 0;
    long long total_m_two = 0;
    long long total_nm_five = 0;
    long long total_nm_two = 0;
    long long total_n = 0;
    long long total_m = 0;
    long long total_nm=0;
    cin >> n >> m;
    long long num_n;
    long long num_m;
    long long five = 5;

    for(long long i=5; i<=n-m;i*=5)
        total_nm_five+= (n-m)/i;

    for(long long i=2; i<=n-m;i*=2)
        total_nm_two+= (n-m)/i;

    for(long long i=5; i<=n;i*=5)
        total_n_five+= n/i;

    for(long long j=5; j<=m;j*=5)
        total_m_five+= m/j;


    for(long long i=2; i<=n;i*=2)
        total_n_two+= n/i;

    for(long long j=2; j<=m;j*=2)
        total_m_two+= m/j;
    total_nm = total_nm_five;
    total_n = total_n_five;
    total_m = total_m_five;

    long long total_two = total_n_two - total_m_two - total_nm_two;
    long long total_five = total_n_five - total_m_five - total_nm_five;

    if(total_two < total_five)
            cout << total_two << '\n';
    else
        cout << total_five << '\n';

    return 0;
}
