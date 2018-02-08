/*
Our friend Monk has an exam that has quite weird rules. Each question has a difficulty level in the form of an Integer. Now, Monk can only solve the problems that have difficulty level less than X . Now the rules are-

Score of the student is equal to the maximum number of answers he/she has attempted without skipping a question.
Student is allowed to skip just "one" question that will not be counted in the continuity of the questions.
Note- Assume the student knows the solution to the problem he/she attempts and always starts the paper from first question.

Given the number of Questions, N ,the maximum difficulty level of the problem Monk can solve , 
X
 ,and the difficulty level of each question , 
A
i
 can you help him determine his maximum score?

Input Format
First Line contains Integer 
N
 , the number of questions and the maximum difficulty 
X
 Monk can solve.
Next line contains 
N
 integers, 
A
i
 denoting the difficulty level of each question.

Output Format
Maximum score Monk can achieve in the exam.

SAMPLE INPUT 
7 6
4 3 7 6 7 2 2
SAMPLE OUTPUT 
3

Explanation
In this example, maximum difficulty = 6, Monk solves question 0 and 1, but skips the question 2 as A[2]>6. Monk then solves the question 3 , but stops at 4 because A[4]>6 and question 2 was already skipped. As 3 questions (0,1 and 3) were solved and 2 questions (2 and 4) have been skipped, therefore we print "3".
*/

#include <stdio.h>

int main()
{
    int n,x,count=0,flag=0;
    
    scanf("%d",&n);
    scanf("%d",&x);
   
    int a[n];
    
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
    
    
    for(int i=0;i<n;i++)
    {
        if(a[i]<=x)
          count++;
        
        else if((a[i]>x) && flag==0)
          flag=1;
        
        else if((a[i]>x) && flag==1)
          break;
    }
    
    printf("%d",count);
    
    return 0;
}