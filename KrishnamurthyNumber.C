/*
A Krishnamurthy number is a number whose sum of the factorial of digits is equal to the number itself. Given a number N as input. Write a program to check whether this number is krishnamurthy number or not.

Input:
First line of input contains a single integer T which denotes the number of test cases. Then T test cases follows. First line of each test case contains a single integer N.

Output:
For each test case print "YES" without quotes if N is a Krishnamurthy Number otherwise print "NO".

Constraints:
1<=T<=100
1<=N<=105

Example:
Input:
2
145
235
Output:
YES
NO

*/

#include <stdio.h>

int main() {
	
	int t;
	scanf("%d",&t);
	
	while(t>0)
	{
	    int n,sum=0,n1,fact;
	    scanf("%d",&n);
	    int temp = n;
	    
	    while(n!=0)
	    {
	       n1 = n%10;
	       fact = 1;
	       for(int i=n1;i>=1;i--)
	           fact = fact*i;
	       sum = sum+fact;
	       n = n/10;
	    }
	    
	    if(sum == temp)
	      printf("YES\n");
	    else
	      printf("NO\n");
	    t--;
	}
	return 0;
}