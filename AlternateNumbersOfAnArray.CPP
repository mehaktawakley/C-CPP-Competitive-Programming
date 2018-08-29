/*
This is a functional problem . Your task is to write the print(int ar[ ], int n) funciton which prints the alternate elements of an array.

Input:
The first line of input contains T denoting the number of testcases.Then each of the T lines contains a single positive integer N denotes number of element in array. Next line contain 'N' integer elements of the array.

Output:
Print the alternate elements of the array(starting from index 0).

Constraints:
1<=T<=200
1<=N<=10^5
1<=ar[i]<=10^5

Example:
Input:
2
4
1 2 3 4
5
1 2 3 4 5

Output:
1 3
1 3 5
*/

#include<stdc++.h>
using namespace std;

int main(
{
	int t;
	cin >> t;
	while(t--)
	{
		int a[100001] = {0};
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		print(ar,n);
		cout<<endl;
	}

	return 0;
}

void print(int ar[], int n)
{
    for(int i=0;i<n;i+=2)
        cout<<ar[i]<<" "; 
}