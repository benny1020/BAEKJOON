#include <iostream>
#include <cstring>
#define MAX_NUM 1000001
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int * check = new int[MAX_NUM];
    int * final = new int[MAX_NUM*2];
    int j;
    int total = 0;
    int num;
    int temp;
    for(int i=0;i<MAX_NUM;i++)
    {
        check[i]=1;
    }
    for(int i=0;i<2*MAX_NUM;i++)
        final[i]=0;
    check[0]=0;
    check[1]=0;
    for(int i=2;i<MAX_NUM;i++)
    {
        if(check[i] == 1)
        {
            j=i;
            while((i*j)<MAX_NUM)
            {
                check[i*j]=0;
                j++;
            }
        }
        if(i*i >=MAX_NUM)
            break;
    }
    cin >> num;
    for(int i=0;i<num;i++)
    {
        cin >> temp;
        for(int j=2;j<=temp/2;j++)
        {

            if(check[j]==1 && check[temp-j]==1)
                total++;
        }
        cout << total << '\n';
        total = 0;
    }

    return 0;
}
