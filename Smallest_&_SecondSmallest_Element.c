/*
Find the smallest and second smallest element in an array
Given an array of integers, your task is to find the smallest and second smallest element in the array. If smallest and second smallest do not exist, print -1.

Input:
The first line of input contains an integer T denoting the number of test cases. Each test case contains an integer n denoting the size of the array. Then following line contains 'n' integers forming the array.

Output:
Print the smallest and second smallest element if possible,else print -1.

Constraints:
1<=T<=100
1<=n<=100
1<=a[i]<=1000

Example:
Input :
3
5
2 4 3 5 6
6
1 2 1 3 6 7
2
1 1
Output :
2 3
1 2
-1
*/

#include <stdio.h>

int main() {
	int n;
	
	scanf("%d",&n);
	
	while(n>0)
	{
	    int t,a[1000],s1,s2,i;
	    
	    scanf("%d",&t);
	    
	    s1=99999;
	    for(i=0;i<t;i++)
	    {
	        scanf("%d",&a[i]);
	        if(a[i]<=s1)
	        s1=a[i];
	    }
	    
	    s2=99999;
	    
	    for(i=0;i<t;i++)
	    {
	        if(a[i]<s2 && a[i]>s1)
	        s2=a[i];
	    }
	    
	    if(s2==99999)
	    {
	        printf("-1");
	    }
	    
	    else
	    {
	        printf("%d ",s1);
	        printf("%d",s2);
	    }
	    printf("\n");
	    n--;
	}
	return 0;
}
	