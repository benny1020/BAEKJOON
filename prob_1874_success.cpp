#include <iostream>
#include <stack>
using std::cout;
using std::cin;

int main(void)
{
    int n;
    int k=1;
    int count=0;
    std::string str ="";
    std::stack<int> st;
    cin >> n;

    int * arr = new int[n];

    for(int i=0;i<n;i++)
        cin >> arr[i];

    while(count<n)
    {
        if(!st.empty())
            if(st.top()>arr[count])
            {
                 break;
            }
        if(arr[count]>=k)
        {
            st.push(k++);
            str+="+\n";
        }
        if(!st.empty())
            if(st.top() == arr[count])
            {
                st.pop();
                str+= "-\n";
                count++;
            }

    }
    if(count < n)
        cout <<"NO\n";
    else
        cout<<str;
    return 0;
}
