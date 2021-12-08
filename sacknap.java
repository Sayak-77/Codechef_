//PROBLEM CODE: SACKNAP


/**Statement
In a far away Galaxy of Tilky Way, there was a planet Tarth where the sport of Tompetitive Toding was very popular. According to legends, there lived a setter known for loving knapsack type problems.

Given N objects in a row, with weights W1,W2,…,WN, you need to find the maximum number of consecutive objects you can fill in a bag of maximum capacity C such that the total weight of objects taken is at least K.

In other words, pick objects such that-

The total weight of collected objects is at least K.
The total weight does not exceed C.
The objects picked must be consecutive (i.e. a subarray of the objects need to be picked)
The number of objects is maxmimized. You need to print this maximum value.
Note-If no such object could be picked, then the answer is obviously 0.

Input:
The first line of input contains T, number of test cases in a file.
The next line contains three integers, N, C and K, as described in the problem statement.
The next line contains N space separated integers, denoting Wi, i.e. weight of the object.
Output:
For test case, output the maximum number of objects you can pick.

Constraints
1≤T≤105
1≤N≤105
Sum of N over all T in a test file does not exceed 106.
1≤Wi≤109
1≤K≤C≤109
Subtasks
25% points- N≤100.
75% points - Original Constraints
Sample Input:
2
5 5 5
5 4 3 2 1
5 5 4
1 4 1 1 1
Sample Output:
2
2
EXPLANATION:
In first case, we can only pick objects with weights {3,2} such that the sum of weight is at least 5 and it doesn't exceed total capacity of bag (i.e. 5).

In second test case, there are multiple optimal choices. We can choose the first two elements, {1,4}, as it satisfies the criteria of weight being at least 4 
and sum of weights not exceeding 5. Or we could alos choose the second and third element. Note, since objects were to be picked consecutively, {1,1,1,1} is not an accepted solution.
**/


/* package codechef; // don't place package name! */

import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
class Sacknap
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int t,cap,k,c,s,res;
		int n,i,j;
		Scanner in = new Scanner(System.in);
		t=in.nextInt();
		while(t!=0)
		{
		    n=in.nextInt();
		    cap=in.nextInt();
		    k=in.nextInt();
		    int arr[]=new int[n];
		    for(i=0;i<n;i++)
		    {
		        arr[i]=in.nextInt();
		    }
		    res=0;
		    for(i=0;i<n;i++)
		    {
		        s=0;
		        c=0;
		        for(j=i;j<n;j++)
		        {
		            s=s+arr[j];
		            c=c+1;
		            if(s>cap)
		            {
		                s=s-arr[j];
		                c=c-1;
		                break;
		            }
		        }
		        if(s<k)
		        {
		            c=0;
		        }
		        if(c>res)
		        {
		            res=c;
		        }
		    }
		    System.out.println(res);
		    --t;
		}
		in.close();
	}
}//sayak chatterjee
