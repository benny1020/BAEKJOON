#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main(void)
{
    string str;
    int count=0;
    bool dp = false;
    stack<int> st;
    getline(cin, str);
    str+='\n';

    for( char ch : str)
    {
        if(ch == '(')
        {
            st.push(1);
            dp = true;
        }
        else if( ch == ')')
        {
            if(dp == true)
            {
                st.pop();
                count += st.size();
                dp = false;
            }
            else
            {
                st.pop();
                count +=1;
            }
        }
    }
    cout << count << endl;
    return 0;
}
