#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    string str;
    int num;
    cin >> str;
    if(str.length()%3 == 0)
        num = str.length()/3;
    else
        num = str.length()/3 +1;
    int * arr = new int[num];
    for(int i=0;i<num;i++)
        arr[i] = 0;
    for(int i=str.length()-1;i>=0;i--)
    {
        if((str.length()-i-1)%3 == 0)
            arr[(str.length()-i-1)/3]+= ((int)(str[i]-'0')*1);
        else if((str.length()-i-1)%3 == 1)
            arr[(str.length()-i-1)/3]+= ((int)(str[i]-'0')*2);
        else if((str.length()-i-1)%3 == 2)
            arr[(str.length()-i-1)/3]+= ((int)(str[i]-'0')*4);
    }

    for(int i=num-1;i>=0;i--)
        cout << arr[i];
    cout <<endl;

    return 0;
}
