/*You are given an integer N. You need to print the series of all prime numbers till N.

Input Format
The first and only line of the input contains a single integer N denoting the number till where you need to find the series of prime number.

Output Format
Print the desired output in single line separated by spaces.

Constraints
1<=N<=1000

SAMPLE INPUT 
9
SAMPLE OUTPUT 
2 3 5 7*/


#include<stdio.h>

int main()
{
    int n,i,j;
    int factors;
    scanf("%d",&n);
    
    for(i=1;i<n;i++)
    {
        factors=0;
        for(j=1;j<n;j++)
        {
            if(i%j==0)
            factors++;
        }
        if (factors==2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
