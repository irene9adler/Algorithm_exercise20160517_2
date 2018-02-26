#include <stdio.h>
#include<math.h>
#define M 100
int nixu(int n)
{
    int result = 0;
    int arr[M];
    int len = 0;
    int l;
   while(n)
    {
        l = n%10;
        arr[len] = l;
        n =n/10;
        len+=1;
    }
    int i;
    for(i =0;i<=len;i++)
    {
        result+=arr[i]*pow(10,len-i);
    }
    return result;
}

int main()
{
    int m;
    while(scanf("%d",&m)!=EOF)
    {
       int n;
       n = nixu(m);
       if (m%n == 0)
       {
          int k = m/n;
          printf("%d * %d = %d\n",n,k,m);
       }
       else
       {
           int n2 = nixu(n);
           printf("%d %d\n",n,n2);
       }

    }
    return 0;
}
