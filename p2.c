#include<stdio.h>
int digit(long n)
{
    if(n==0)
        return 0;
    return 1+digit(n/10);
}

int main()
{

    printf("%ld",digit(1234575656555444));

}
