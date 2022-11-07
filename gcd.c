main()
{
    int a,b,rem;
    printf("Give two numbers:\n");
    scanf("%d%d",&a,&b);
    rem=a%b;
    while (rem!=0)
    {    
        a=b;
        b=rem;
        rem=a%b;
    }
    printf("gcd is %d",b);
}