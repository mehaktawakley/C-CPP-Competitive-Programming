/*
Given a list of characters, merge all of them into a string.

Input:
First line of the input contains an integer T, denoting the number of testcases. Then T test case follows. Each testcase contains two lines:-
The number of characters in the array N.
The array of characters separated by space

Output:
For each testcase, print the character array converted into a string.

Constraints:
1<=T<=100
10<=N<=100


Example:

Input:
2
13
g e e k s f o r g e e k s
11
p r o g r a m m i n g

Output:
geeksforgeeks
programming
*/


#include <stdio.h>

int main() {
	
	int t;
	scanf("%d",&t);
	    int n,count=0,flag=0;
	    scanf("%d",&n);
	    char a;
	    while((a=getchar())!=EOF)
	    {
	        if(a!=32 && a>=97 && a<=122){
	          printf("%c",a);
	          flag = 0;
	        }
	        else if(a>=48 && a<=57 && flag==0){
	            printf("\n");
	            flag =1;
	       }
	    }
	
	return 0;
}



/*
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    while(n>0)
    {
        int t;
        char a[10000],b[10000];
        
        scanf("%d",&t);
        
        for(int i=0;i<2*t;i++)
        {
            scanf("%c",&a[i]);
            if(a[i]!=' ')
              printf("%c",a[i]);
        }
        n--;
    }
    
    return 0;
}
*/