#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int check(long long int, int);
void main()
{
    long long int n,x;
    int flag=0,p=0;
    printf("Enter the value of n");
    scanf("%lli",&n);
    //printf("%lli \n",n);
    for(long long int i=1;i<=n;i++)
    {
        //printf("%lli \n",i);
        x=i;
        while(x>0)
        {
            x=x/10;
            p++;
        }
        //printf("%d \n",p);
        flag = check(i,p);
        if(flag==1)
        {
            printf("The number %lli is a Armstrong number\n",i);
        }
        p=0;N
    }
}
int check(long long int x, int y)
{
    int j=0;
    long long int s=0;
    int *a = (int *)(malloc(y*sizeof(int)));
    long long int temp=x;
    while(temp>0)
    {
        a[j]=pow(temp%10,y);
        s=s+a[j];
        temp=temp/10;
        //printf("%llu \n",s);
        j++;
    }
    if(s==x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

