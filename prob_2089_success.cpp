#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int num;
    int k=0;
    cin >> num;
    stack<int> st;
    if(num == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    while( num!= 1)
    {
        if( num > 0)
        {
            if(num%-2 == 1)
            {
                num = (num/-2);
                st.push(1);
            }
            else
            {
                num = num/-2;
                st.push(0);
            }
        }
        else if(num < 0)
        {
            if(num%-2 == -1)
            {
                num = (num/-2)+1;
                st.push(1);
            }
            else
            {
                num = num/-2;
                st.push(0);
            }
        }
    }
    st.push(1);
    while(!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    cout << endl;
    return 0;
}
