/*
You are given a string, which contains entirely of decimal digits (0-9). Each digit is made of a certain number of dashes, as shown in the image below. For instance 1 is made of 2 dashes, 8 is made of 7 dashes and so on.

digits made of dashes

You have to write a function that takes this string message as an input and returns a corresponding value in terms of a number. This number is the count of dashes in the string message.

Note:

0 consists of 6 dashes, 1 consists of 2 dashes, 2 consists of 5 dashes, 3 consists of 5 dashes, 4 consists of 4 dashes, 5 consists of 5 dashes, 6 consists of 6 dashes, 7 consists of 3 dashes [though the figure shows that 7 consists of 4 dashes but due to minor mistake in the problem please write your solution assuming 7 consists of 3 dashes], 8 consists of 7 dashes, 9 consists of 6 dashes.

Constraints

String message will contain at least one digit, but not more than 100
Each character in code will be a digit ('0'-'9').
SAMPLE INPUT 
12134
SAMPLE OUTPUT 
18
*/

#include <stdio.h>

int main()
{
    char n;
    int dash=0;
    
    while((n=getchar())!=EOF)
    {
        if(n=='0')
          dash = dash+6;
        
        else if(n=='1')
          dash = dash+2;
          
        else if(n=='2')
          dash = dash+5;
          
        else if(n=='3')
          dash = dash+5;
          
        else if(n=='4')
          dash = dash+4;
          
        else if(n=='5')
          dash = dash+5;
          
        else if(n=='6')
          dash = dash+6;
          
        else if(n=='7')
          dash = dash+3;
          
        else if(n=='8')
          dash = dash+7;
          
        else if(n=='9')
          dash = dash+6;
    }
    
    printf("%d",dash);
    
    return 0;
}