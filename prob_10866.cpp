#include <iostream>
#include <string>
using namespace std;

class deque
{
private:
    int arr[10000];
    int start;
    int end;
    int size;
public:
    deque();
    void push_front(int x);
    void push_back(int x);
    void pop_front();
    void pop_back();
    void func_size();
    void empty();
    void front();
    void back();

};

deque::deque()
{
    start=5000;
    end=5000;
    size=0;
}

void deque::push_front(int x)
{
    if(start == -1)
    {
        start = 9999;
    }

    if(start==end)
    {
        arr[start--]=x;
        end+=1;
    }
    else
    {
        arr[start--]=x;
    }
    size++;
}

void deque::push_back(int x)
{
    if(end==10000)
        end = 0;
    if(start==end)
    {
        arr[end]=x;
        start-=1;
        end+=1;
    }
    else
    {
        arr[end]=x;
        end--;
    }
    size++;
}

void deque::pop_front()
{
    if(size == 0)
    {
        cout << "-1\n";
        return;
    }
    start+=1;
    if(start==10000)
        start = 0;
    cout << arr[start]<<'\n';
    size--;
    if(size == 0)
    {
        start = 5000;
        end = 5000;
    }
}

void deque::pop_back()
{
    if(size==0)
    {
        cout << "-1\n";
        return;
    }
    end-=1;
    if(end == -1)
        end = 9999;
    cout<<arr[end]<<'\n';
    size--;
    if(size == 0)
    {
        start = 5000;
        end = 5000;
    }
}
void deque::func_size()
{
    cout << size << '\n';
}
void deque::empty()
{
    if(size == 0)
        cout << 1<<'\n';
    else
        cout << 0 << '\n';

}
void deque::front()
{
    if(size == 0)
        cout << -1 <<'\n';
    else
        cout << arr[start+1] << '\n';
}
void deque::back()
{
    if(size == 0)
        cout << -1<<'\n';
    else
        cout << arr[end-1] << '\n';
}

int main(void)
{
    deque deq;
    int num;
    string str;
    int x;
    cin >> num;
    for(int i=0;i<num;i++)
    {
        cin >> str;
        if(str == "push_front")
        {
            cin >> x;
            deq.push_front(x);
        }
        else if(str == "push_back")
        {
            cin >> x;
            deq.push_back(x);
        }
        else if(str == "pop_front")
        {
            deq.pop_front();
        }
        else if(str == "pop_back")
        {
            deq.pop_back();
        }
        else if(str == "size")
        {
            deq.func_size();
        }
        else if(str == "empty")
        {
            deq.empty();
        }
        else if(str == "front")
        {
            deq.front();
        }
        else if(str == "back")
        {
            deq.back();
        }
        else
        {
            cout << "error\n";
            return 0;
        }

    }
}
