#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    char ch;
    char temp;
    int maxx=0;
    int count =1;
    cin >> n;
    char ** arr = new char*[n];
    for(int i=0;i<n;i++)
        arr[i] = new char[n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> arr[i][j];
    // 같은 행만 바꾸기
    for(int i=0;i<n;i++)
        for(int j=0;j<n-1;j++)
        {
            temp=arr[i][j];
            arr[i][j] = arr[i][j+1];
            arr[i][j+1]=temp;
            for(int a=0;a<n;a++)
            {
                count = 1;
                for(int b=0;b<n-1;b++)
                {
                    if(arr[a][b] == arr[a][b+1])
                    {
                        count++;
                        maxx = max(count,maxx);
                    }
                    else
                        count=1;
                }
            }
            for(int a=0;a<n;a++)
            {
                count =1;
                for(int b=0;b<n-1;b++)
                {
                    if(arr[b][a] == arr[b+1][a])
                    {
                        count++;
                        maxx = max(count,maxx);
                    }
                    else
                        count=1;
                }
            }
            temp = arr[i][j];
            arr[i][j] = arr[i][j+1];
            arr[i][j+1]=temp;
        }

        for(int i=0;i<n;i++)
            for(int j=0;j<n-1;j++)
            {
                temp=arr[j][i];
                arr[j][i] = arr[j+1][i];
                arr[j+1][i]=temp;
                for(int a=0;a<n;a++)
                {
                    count =1;
                     for(int b=0;b<n-1;b++)
                    {
                        if(arr[a][b] == arr[a][b+1])
                        {
                            count++;
                            maxx = max(count,maxx);
                        }
                        else
                            count=1;
                    }
                }
                for(int a=0;a<n;a++)
                {
                    count = 1;
                    for(int b=0;b<n-1;b++)
                    {
                        if(arr[b][a] == arr[b+1][a])
                        {
                            count++;
                            maxx = max(count,maxx);
                        }
                        else
                            count=1;
                    }
                }
                temp = arr[j][i];
                arr[j][i] = arr[j+1][i];
                arr[j+1][i]=temp;
            }

        cout << maxx << endl;
        return 0;
}
