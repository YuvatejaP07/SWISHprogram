#include <stdio.h>

int main()
{
    int x,p,c;
    c=0;
    scanf("%d%d",&x,&p);
    while(x>0)
    {
        x=x*(100-p)/100;
        c++;
    }
    printf("%d",c);
    return 0;
}
