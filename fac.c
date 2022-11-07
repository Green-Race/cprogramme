#include <stdio.h>
main()
{
    int p,i,num;
    printf("Give numbers:\n");
    scanf("%d",&num);
    p=1,i=1;
    while (i<=num)
    {
        p=p*i;
        i=i+1;
    }
    printf("The factorial is %d",p);
}