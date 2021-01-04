#include <iostream>
#include <string>
#include <stack>
using namespace std;



int main(void)
{
    stack<char> left;
    stack<char> right;

    string str;
    char ch, temp;
    int num;
    cin >> str;
    int len = str.length();

    for(int i=0;i<len;i++)
        left.push((char)str[i]);

    cin >> num;
    for(int i=0;i<num;i++)
    {
        cin >> ch;
        switch(ch)
        {
            case 'P':
                cin >> temp;
                left.push(temp);
                break;
            case 'L':
                if(left.empty())
                    break;
                right.push(left.top());
                left.pop();
                break;
            case 'B':
                if(left.empty())
                    break;
                left.pop();
                break;
            case 'D':
                if(right.empty())
                    break;
                left.push(right.top());
                right.pop();
                break;
            default:
                cout << "error\n";
                return 0;
        }
    }
    int left_len = left.size();
    int right_len = right.size();
    int total_len = left_len+right_len;

    char * arr = new char[total_len];
    for(int i=0;i<left_len;i++)
    {
        arr[left_len-i-1] = left.top();
        left.pop();
    }
    for(int i=0;i<right_len;i++)
    {
        arr[left_len+i]=right.top();
        right.pop();
    }

    for(int i=0;i<total_len;i++)
        cout << arr[i];
    cout << '\n';
    return 0;
}
