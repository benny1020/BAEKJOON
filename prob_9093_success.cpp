#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
int main(void)
{
    stack<char> st;
    int num;
    cin >> num;
    cin.ignore();
    string str;
    for(int i=0;i<num;i++)
    {
        getline(cin,str);
        str+='\n';
        for(char ch : str)
        {
            if(ch !=' ' && ch != '\n')
            {
                st.push(ch);
            }
            else
            {
                while(!st.empty())
                {
                    cout << st.top();
                    st.pop();
                }
                if(ch==' ')
                    cout << ' ';
                if(ch=='\n')
                    cout << '\n';
            }
        }
    }
        return 0;
}
