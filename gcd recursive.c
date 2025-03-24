#include<stdio.h>
int gcdrecursive(int m,int n)
{
    if(n>m)
        return	gcdrecursive(n,m); 
    if(n==0)
        return m;
    else
        return gcdrecursive(n,m%n);
}
void main()
{
    int a,b,igcd; 
    printf("enter the two numbers whose gcd is to be found:");
    scanf("%d%d",&a,&b);
    printf("GCD of a,b is %d",gcdrecursive(a,b));
}
