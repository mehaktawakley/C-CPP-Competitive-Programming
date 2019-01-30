/*
Given A String S Find The Number Of White Spaces In The Given String S.

Input Format
Take Input String S

Output Format
Number Of White Spaces In S

Constraints
0 < S < 100001

SAMPLE INPUT 
Hello World
SAMPLE OUTPUT 
1
*/

#include <stdio.h>

int main() {
    char n;
    int count = 0;
    
    while((n=getchar())!=EOF)
    {
       if(n==' ')
         count++;
    }
    
    printf("%d",count);
    
    return 0;
}
