/** PROBLEM CODE: DISCNTK
 * 
 * Chef has a sequence A1,A2,…,AN and an integer K. Now there is a sliding window of size K which is moving from the very left of the array to the very right 
 * and at a particular time Chef has access to only those K elements that are present in that window and Chef wants to find the number of the distinct elements 
 * of each window of size K. Help Chef to find the answer.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two integers N and K.
The second line contains N space-separated integers A1,A2,…,AN.
Output
For each test case, print a single line containing N−K+1 space-separated integers — the number of the distinct elements of each window of size K from the very left of the array to the very right of the sequence.

Constraints
1≤T≤10
1≤K≤N≤105
1≤Ai≤105 for each valid i
Example Input
2
6 3
5 8 5 4 4 1
4 2
4 5 2 2
Example Output
2 3 2 2
2 2 1
Explanation
Example case 1: Number of the distinct elements of [5,8,5], [8,5,4], [5,4,4], [4,4,1] are respectively 2, 3, 2, 2.
**/


#include <iostream>
#include <string.h>
#include <cstring>
#include <unordered_map>
#include <algorithm>
using namespace std;
typedef long long int u;
void check(int arr[],int n,int k)
{
    unordered_map<int,int> umap;
    int i,c=0;
    for(i=0;i<k;i++)
	    {
	        if(umap[arr[i]]==0){
	        ++c;}
	        ++umap[arr[i]];
	    }
	    cout<<c<<" ";
	    for(i=k;i<n;i++)
	    {
	        if(umap[arr[i-k]]==1){
	        --c;}
	        --umap[arr[i-k]];
	        if(umap[arr[i]]==0)
	        ++c;
	        ++umap[arr[i]];
	        cout<<c<<" ";
	    }
	    cout<<"\n";
}
int main() {
	// your code goes here
	u t,i,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    int arr[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    check(arr,n,k);
	}
}