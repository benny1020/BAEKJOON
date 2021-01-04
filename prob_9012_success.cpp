#include <iostream>
#include <cstring>
#include <stack>
using std::cin;
using std::cout;


int main(void)
{

    int num;
    std::string str;
    cin >> num;
    cin.ignore();
    for(int i=0;i<num;i++)
    {
        std::stack<int> st;
        getline(cin,str);
        str+='\n';
        for(char ch : str)
        {
            if(ch =='(')
                st.push(1);
            else if(ch ==')')
            {
                if(st.empty())
                {
                    cout << "NO\n";
                    break;
                }
                else
                    st.pop();
            }

            if(ch =='\n')
            {
                if(st.empty())
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }

        }
    }
}
