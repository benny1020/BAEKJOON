#include <iostream>
#include <stack>

#define MAX_NUM 1000001

using namespace std;

int main(void)
{
    int num;

    cin >> num;
    int * arr = new int[num];
    int * check = new int[MAX_NUM];
    int * real = new int[num];
    int * final = new int[num];
    stack<int> st;

    for(int i=0;i<MAX_NUM;i++)
        check[i] = 0;
    for(int i=0;i<num;i++)
        cin >> arr[i];
    for(int i=0;i<num;i++)
    {
        check[arr[i]]++;
    }

    for(int i=0;i<num;i++)
    {
        real[i] = check[arr[i]];
    }

    for(int i=0;i<num;i++)
    {
        if(st.empty())
            st.push(i);
        else
        {
            while(!st.empty() && real[st.top()] < real[i])
            {
                final[st.top()] = arr[i];
                st.pop();
            }
            st.push(i);
        }
    }
    while(!st.empty())
    {
        final[st.top()] = -1;
        st.pop();
    }
    for(int i=0;i<num;i++)
        cout << final[i] << ' ';
    cout << endl;

    return 0;

}
