#include <iostream>
#include <cmath>

using namespace std;

int find_five(int num)
{
    int five = 5;
    int n, i;
    if(num == 0)
        return 0;
    if(num%five !=0)
        return 0;
    else
    {
        for(i=1;i<=4;i++)
        {
            if(num%(int)pow(five,i) !=0)
                break;
        }
        return i-1;
    }

}
int main(void)
{
    int num;
    int total=0;
    cin >> num;
    for(int i=1;i<=num;i++)
    {
        total+= find_five(i);
    }
    cout << total <<'\n';
    return 0;
}
