#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int E=1;
    int S=1;
    int M=1;
    int y=1;
    int c_e, c_s,c_m;
    cin >> c_e >> c_s >> c_m;
    while(!(E == c_e && S == c_s && M == c_m))
    {
        E++;
        S++;
        M++;
        if(E > 15)
            E=1;
        if(S > 28)
            S=1;
        if(M > 19)
            M=1;
        y++;
    }
    cout << y << endl;
    return 0;
}
