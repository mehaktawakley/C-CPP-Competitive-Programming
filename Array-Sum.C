/*
You are given an array of integers of size . You need to print the sum of the elements in the array, keeping in mind that some of those integers may be quite large.

Input Format

The first line of the input consists of an integer . The next line contains space-separated integers contained in the array.

Output Format

Print a single value equal to the sum of the elements in the array.

Constraints

1<=N<=10 0<=a[i]<=10^10

SAMPLE INPUT 
5
1000000001 1000000002 1000000003 1000000004 1000000005
SAMPLE OUTPUT 
5000000015
*/

#include<stdio.h>

int main()
{
    int n;
    long long int a,sum=0;
    
    scanf("%d",&n);
    
    while(n>0)
    {
        scanf("%lli",&a);
        sum=sum+a;
        n--;
    }
    
    printf("%lli",sum);
}