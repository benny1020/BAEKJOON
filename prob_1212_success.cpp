#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    str.reserve(333335);
    cin >> str;
    int num = str.length();

    for(int i=0;i<num;i++)
    {
        if( i == 0)
        {
            if(str[i] == '0')
            {
                if(num == 1)
                    cout << 0;
            }
            else if(str[i] == '1')
                cout << 1;
            else if(str[i] == '2')
                cout << 1 << 0;
            else if(str[i] == '3')
                cout << 1 << 1;
            else if(str[i] == '4')
                cout << 1 << 0 << 0;
            else if(str[i] == '5')
                cout << 1 << 0 << 1;
            else if(str[i] == '6')
                cout << 1 << 1 << 0;
            else if(str[i] == '7')
                cout << 1 << 1 << 1;
        }
        else
        {
            if(str[i] == '0')
                cout<< 0 << 0<< 0;
            else if(str[i] == '1')
                cout << 0 << 0 << 1;
            else if(str[i] == '2')
                cout << 0 << 1 << 0;
            else if(str[i] == '3')
                cout << 0 << 1 << 1;
            else if(str[i] == '4')
                cout << 1 << 0 << 0;
            else if(str[i] == '5')
                cout << 1 << 0 << 1;
            else if(str[i] == '6')
                cout << 1 << 1 << 0;
            else if(str[i] == '7')
                cout << 1 << 1 << 1;
        }
    }
    cout << endl;
    return 0;
}
