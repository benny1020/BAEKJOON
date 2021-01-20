#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int trial;
    int temp;

    cin >> trial;

    while(trial--)
    {
        cin >> temp;
        int ** D = new int*[temp];
        int ** arr = new int*[temp];

        for(int i=0;i<temp;i++)
        {
            D[i] = new int[2];
            arr[i] = new int[3];
        }
        for(int i=0;i<temp;i++)
            cin >> D[i][0];
        for(int i=0;i<temp;i++)
            cin >> D[i][1];
        arr[0][0] = 0;
        arr[0][1] = D[0][0];
        arr[0][2] = D[0][1];
        for(int i=1;i<temp;i++)
        {
            arr[i][0] = max(max(arr[i-1][0], arr[i-1][1]),max(arr[i-1][1],arr[i-1][2]));
            arr[i][1] = max(arr[i-1][0] + D[i][0], arr[i-1][2]+ D[i][0]);
            arr[i][2] = max(arr[i-1][0] + D[i][1], arr[i-1][1]+D[i][1]);
        }
        cout << max(arr[temp-1][1],arr[temp-1][2]) << endl;
        delete[] D;
        delete[] arr;
    }
    return 0;
}
