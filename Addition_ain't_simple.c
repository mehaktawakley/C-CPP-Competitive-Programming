/*Jack is awesome. His friends call him little Einstein. To test him, his friends gave him a string. They told him to add the string with its reverse string and follow these rules:

Every ith character of string will be added to every ith character of reverse string.
Both string will contain only lower case alphabets(a-z).
Eg:- a+a=b,a+c=d,z+a=a (Refer to sample test cases for more details)
Input:

First line contains a value N denoting number of test cases. Next N lines contains string str.

Output:

For every string str output the string that Jack's friends wants from him.

Constraints

1 <= N <= 10

1 <= str <= 10^5

SAMPLE INPUT 
4
hello
codeapocalypse
programming
world
SAMPLE OUTPUT 
wqxqw
hhtdmqrrqmdthh
wfxtebetxfw
aajaa*/

/*


#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    int j;
    scanf("%d",&n);
    
    for(j=0;j<n;j++)
    {
        char str[100000];
        char final[100000];
        int i,l;
        
        scanf("%s",str);
        l = strlen(str);
        
        for(i=0;i<l;i++)
        {
            final[i]=str[i]+str[l-1-i]-192;
            if(final[i]>26)
            final[i]-=26;
            printf("%c",final[i]+96);
        }
        
        printf("\n");
    }
    
    return 0;
}