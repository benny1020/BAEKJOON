#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    int N,K;

    cin >> N >> K;
    int * arr = new int[N];
    queue<int> q;

    for(int i=0;i<N;i++)    q.push(i+1);

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<K;j++)
        {
            if(j==K-1)
            {
                arr[i]= q.front();
                q.pop();
            }
            else
            {
                q.push(q.front());
                q.pop();
            }
        }
    }
    cout << '<';
    for(int i=0;i<N-1;i++)
        cout << arr[i]<<", ";
    cout <<arr[N-1]<<">\n";
    return 0;
}
