#include <iostream>


using namespace std;

int main(void)
{
    int num;
    cin >> num;
    int * arr = new int[num];
    int * check = new int[num];
    for(int i=0; i<num;i++)
    {
        cin >> arr[i];
        check[i]=-1;
    }
    check[num-1]=-1;
    for(int i=num-2;i>=0;i--)
    {
        for(int j=i+1;j<num;j++)
        {
            if(arr[i] > arr[j] && check[j]== -1)
            {
                check[i] = -1;
                break;
            }
            if(arr[i] < arr[j])
            {
                check[i] = j;
                break;
            }
            if(arr[i] > arr[j])
            {
                j = check[j]-1;
            }
        }
    }

    for(int i=0;i<num;i++)
    {
        if(check[i] == -1)
            cout << -1 << ' ';
        else
            cout << arr[check[i]] << ' ';
    }

    cout << endl;
    return 0;




}
