#include<stdio.h>
int digit(long n)
{
    if(n>=9)
        return 1;
    return 1+digit(n/10);
}

int main()
{

    printf("%ld",digit(1234575656555444));

}
