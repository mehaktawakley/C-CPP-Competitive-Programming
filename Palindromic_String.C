/*You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).

Input Format
The first and only line of input contains the String S. The String shall consist of lowercase English alphabets only.

Output Format
Print the required answer on a single line.

Constraints 
1≤|S|≤100

Note
String S consists of lowercase English Alphabets only.

SAMPLE INPUT 
aba
SAMPLE OUTPUT 
YES*/


#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int l;
    int i,flag=1;
    scanf("%s",s);
    l = strlen(s);
    
    for(i=0;i<=l;i++)
    {
        if(s[i]!=s[strlen(s)-i-1])
        {
            flag=0;
            break;
        }
        l--;
    }
    if (flag==1)
    printf("YES");
    else
    printf("NO");
    return 0;
}