#include<stdio.h>
int digit(int n)
{
    if(n/10==0)
        return 0;
    return +digit(n/10);
}

int main()
{
    int n,count=0,i;

    printf("%d",digit(1234));

}
