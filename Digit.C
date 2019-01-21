/*
Given A Number N, Find The Number Of Digits In N.

Input Format
First Line Take Input Value Of N

Output Format
Number Of Digits In N

Constraints
0 < N < 10 100

SAMPLE INPUT 
12345678
SAMPLE OUTPUT 
8
*/

#include<stdio.h>

int main()
{
    char n;
    int count=0;

    while((n=getchar())!=EOF)
    {
        count++;
    }
    
    printf("%i",count);
}
