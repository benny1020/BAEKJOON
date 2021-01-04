#include <iostream>

using namespace std;

void queue_push(int * queue, int * start, int * end, int x)
{
    if(*start == *end)
    {
        queue[*start] = x;
        *end+=1;
    }
    else
    {
        queue[*end] = x;
            *end+=1;
    }
}
int queue_pop(int * queue, int * start, int * end)
{
    if(*start==*end)
        return -1;
    *start+=1;
    return queue[*start-1];
}
int queue_size(int * queue, int start, int end)
{
    return end-start;
}
int queue_empty(int * queue, int start, int end)
{
    if(start==end)
        return 1;
    else
        return 0;
}
int queue_front(int * queue,int start, int end)
{
    if(start==end)
        return -1;
    return queue[start];
}
int queue_back(int * queue, int start, int end)
{
    if(start==end)
        return -1;
    return queue[end-1];
}
int main(void)
{
    int queue[10000];
    int start = 0;
    int end = 0;
    int num, temp;
    string str;
    cin >> num;


    for(int i=0;i<num;i++)
    {
        cin >> str;
        if(str=="push")
        {
            cin >> temp;
            queue_push(queue,&start,&end,temp);
        }
        else if(str=="pop")
        {
            cout << queue_pop(queue,&start,&end)<<'\n';
        }
        else if(str=="size")
        {
            cout << queue_size(queue,start,end)<<'\n';
        }
        else if(str == "empty")
        {
            cout << queue_empty(queue,start,end)<<'\n';
        }
        else if(str=="front")
        {
            cout << queue_front(queue,start,end)<<'\n';
        }
        else if(str=="back")
        {
            cout << queue_back(queue,start,end)<<'\n';
        }
        else
        {
            cout << "error\n";
            return 0;
        }
    }
}
