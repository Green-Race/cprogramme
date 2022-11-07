main()
{
    int a=0,b=1,c,i=3,n;
    printf("Give the number of terms:\n");
    scanf("%d",&n);
    printf("%d\n%d",a,b);
    while (i<=n)
    {
        c=a+b;
        printf("\n%d",c);
        a=b;
        b=c;
        i++;
    }
}