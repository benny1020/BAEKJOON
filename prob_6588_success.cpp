#include <iostream>
#define MAX_NUM 1000001

using namespace std;


int main(void)
{
    bool check[MAX_NUM];
    int n;
    int a,b =0;
    int k;
    int num;
    for(int i=0;i<=MAX_NUM;i++)
        check[i]=true;
    check[0]=false;
    check[1]=false;

    for(int i=2;i<=MAX_NUM;i++)
    {
        if(i*i>MAX_NUM) break;
        if(check[i] == true)
        {
            for(int j=i;j<=MAX_NUM;j++)
            {
                if(j*i>MAX_NUM)
                    break;
                check[j*i]=false;
            }
        }
    }
    do{

        scanf("%d", &n);
        if(n==0)
            break;
        num=3;
        while(true)
        {
            if(check[num] == true)
            {
                a = num;
                if(check[n-num] == true)
                {
                    b = n-num;
                    printf("%d = %d + %d\n",n,a,b);
                    break;
                }

            }
            num++;
        }
    }while(n!=0);
}
