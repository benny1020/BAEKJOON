#include <iostream>
#include <algorithm>

using namespace std;

int get_digit(int num)
{
    int dec = 10;
    int digit = 0;
    while(num)
    {
        num /= dec;
        digit++;
    }
    return digit;
}
int main(void)
{
    int chanel;
    cin >> chanel;
    int n, dec;
    dec = 10;
    int digit = get_digit(chanel);
    int * arr = new int[digit];
    cout << digit << endl;
    int temp=1;
    int * ans = new int[digit];
    while(temp<=digit)
    {
        arr[temp-1] = chanel%dec/(dec/10);
        chanel = chanel - chanel%dec;
        temp+=1;
        dec *=10;
    }
    for(int i=0;i<digit;i++)
        cout << arr[i] << ' ';
    cin >> n;
    int * fix = int num[10];
    for(int i=0;i<n;i++)
        fix[i] = 1;
    for(int i=0;i<n;i++)
    {
        cin >> temp;
        fix[temp] = 0;
    }
    for(int i=digit-1;i>=;i--)
    {
        if(fix[i] == 0)//망가짐
        {
            int find = i;
            while(true)
            {
                if(fix[find-1]==0 && fix[find+1] == 9 )
            }
        }
        else //안망가짐
        {

        }
    }


    return 0;
}
