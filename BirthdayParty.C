/*
Mr. X's birthday is in next month. This time he is planning to invite N of his friends. He wants to distribute some chocolates to all of his friends after party. He went to a shop to buy a packet of chocolates.
At chocolate shop, each packet is having different number of chocolates. He wants to buy such a packet which contains number of chocolates, which can be distributed equally among all of his friends.
Help Mr. X to buy such a packet.

Input:
First line contains T, number of test cases.
Each test case contains two integers, N and M. where is N is number of friends and M is number number of chocolates in a packet.

Output:
In each test case output "Yes" if he can buy that packet and "No" if he can't buy that packet.

Constraints:
1<=T<=20
1<=N<=100
1<=M<=10^5

SAMPLE INPUT 
2
5 14
3 21
SAMPLE OUTPUT 
No
Yes

Explanation
Test Case 1:
There is no way such that he can distribute 14 chocolates among 5 friends equally. 
Test Case 2:
There are 21 chocolates and 3 friends, so he can distribute chocolates eqally. Each friend will get 7 chocolates.
*/


#include <stdio.h>

int main()
{
    int t;
    
    scanf("%d",&t);
    
    while(t>0)
    {
        int n,m;
        
        scanf("%d",&n);
        scanf("%d",&m);
        
        if(m%n == 0)
          printf("Yes\n");
        
        else 
          printf("No\n");
          
        t--;
    }
    
    return 0;
}