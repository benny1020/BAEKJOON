#include <iostream>
#include <cstring>
#include <queue>
#include <stack>
using namespace std;

int main(void)
{
    string str;
    bool tp = false;
    bool kt = false;
    queue<char> que;
    stack<char> st;
    getline(cin, str);
    for(char ch : str)
    {

        if(ch == '<')
        {
            kt=false;
            tp=true;
            while(!st.empty())
            {
                cout << st.top();
                st.pop();
            }
        }

        if(tp == false && ch != ' ')
            st.push(ch);

        else if(tp ==true)
            que.push(ch);

        if(ch == ' ')
        {
            while(!st.empty())
            {
                cout << st.top();
                st.pop();
            }
            if(st.empty() && que.empty())
                cout << ' ';
        }
        if(ch == '>')
        {
            kt=true;
            tp=false;
            while(!que.empty())
            {
                cout << que.front();
                que.pop();
            }
        }
    }
    while(!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    cout << endl;
    return 0;


}
