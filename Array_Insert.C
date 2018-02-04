/*
Gary likes to solve problems of array, but he doesn't like problems that involve queries. His school teacher gave him an assignment full of problems but one of them involve queries. Can you help Gary in solving that problem so that he can go and play with his friends? The problem is :

Given an Array A consisting of N positive integers, you have to answer Q queries on it. Queries can be of the two types: * 1 X Y - Update X at location Y in the array. * 2 L R - Print the sum of range [L, R], i.e. Both L and R are inclusive.

Note:- Array indexing is from 0.
Input:

    The first line contains two space separated integers N(Length of Array) and Q(Queries).
    Next Line contains N space separated integers denoting array A.
    Next Q Line contains 3 space separated integers for each line, as described above
Output: Answer to the each query of type 2 in a new line, only when range is valid, otherwise ouput `-1`

Constraints: 1 <= N <= 10^9 1 <= Q <= 10^5 1 <= A[i], X, Y, L, R <= 10^5

SAMPLE INPUT 
5 5
2 3 4 8 9
1 0 3
2 0 1
2 0 4
1 2 5
2 0 3
SAMPLE OUTPUT 
6
27
19

Explanation
After First query:

   Array becomes 3 3 4 8 9

After Second query:

    Sum of range [0, 1] i.e. A[0]+A[1] is 6

After Third query

    Sum of range [0, 4] is 27

After Fourth query

    Array becomes 3 3 5 8 9

After Fifth query

    Sum of range [0, 3] is 19
*/

#include<stdio.h>

int main()
{
    int n,q,a[100000];
    
    scanf("%d",&n);
    scanf("%d",&q);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    while(q>0)
    {
        int f,x,y,l,r,sum=0;
        
        scanf("%d",&f);
        
        if (f==1)
        {
            scanf("%d",&x);
            scanf("%d",&y);
            a[x]=y;
        }
        
        else if (f==2)
        {
            scanf("%d",&l);
            scanf("%d",&r);
            if(l<=r)
            {
               for(int i=l;i<=r;i++)
               {
                   sum=sum+a[i];
               }
               printf("%d\n",sum);
            }
            
            else
               printf("-1\n");
        }
        
        q--;
    }
    
}