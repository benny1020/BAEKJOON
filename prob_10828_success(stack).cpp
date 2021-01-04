#include <iostream>
#include <cstring>
#define max_arr 10000
using namespace std;

class stack
{
private:
    int * arr;
    int size;

public:
    stack()
    {
        arr = new int[max_arr];
        size = 0;
    }
    void push(int num)
    {
        arr[size++]=num;
    }
    void isEmpty()
    {
        if(size==0)
            cout << 1 <<"\n";
        else
        {
            cout << 0<<"\n";
        }
    }
    void pop()
    {
        if(size==0)
            cout << -1<<"\n";
        else
        {
        size--;
        cout << arr[size] << "\n";
        }
    }
    void print_size()
    {
        cout << size <<"\n";
    }

    void top()
    {
        if(size==0)
            cout << -1 << "\n";
        else
        {
            cout << arr[size-1]<<"\n";
        }

    }


};

int main(void)
{
    stack test;
    int num,temp;
    string str;
    cin >> num;


    for(int i=0; i<num; i++)
    {
        cin >> str;
        if(str == "push")
        {
            cin >> temp;
            test.push(temp);
        }
        else if(str == "pop")
        {
            test.pop();
        }
        else if(str == "size")
        {
            test.print_size();
        }
        else if(str == "empty")
        {
            test.isEmpty();
        }
        else if(str == "top")
        {
            test.top();
        }
        else
            cout << "ERROR"<<"\n";
    }
    return 0;
}
