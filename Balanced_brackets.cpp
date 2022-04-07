/**  PROBLEM CODE: BALBRACK
 * 
 * Misha was playing with Balanced Brackets alone. Mykhailo also wanted to play the game with her, so he comes up and asks her a question.
"You sure play lot of balanced brackets, but do you know how to make balanced brackets?"
He tells Misha that, he will give her a string consisting of only '(' and ')', which is not necessarily balanced (A string of '(' and ')' is balanced if for every '(' we can find a matching ')' 
later and vice versa.)
Misha is allowed to chose a sub-sequence (i.e. not necessarily contiguous substring) of brackets. AFTER chosing a the sub-sequence, she is allowed to re-arrange 
it (if needed) such that this chosen sub-sequence (after rearrangement) is balanced. Find the maximum length of this sub-sequence. 

Input:
First line will contain T, number of testcases. Then the testcases follow.
First line of each test case has an integer N, denoting length of string.
Second line of each test case has a string S which is the string. String will only consist of '(' and ')'.
Output:
For each testcase, the maximum possible length of balanced string.

Constraints
1≤T≤10
1≤|S|≤105
String will only consist of '(' and ')'.
NOTE- Input files are huge. Prefer to use fast input-output.
Subtasks
35% points- 1≤N≤10.
65% Points- Original Constraints
Sample Input:
2  
2  
()  
4  
)(((  
Sample Output:
2
2
EXPLANATION:
In first case, clearly a balanced string of length 2 is possible.
In second case, Misha can chose the starting ')' and then any of the '('. The chosen sub-sequence will be ')('. Since she is allowed to rearrange them, she will 
rearrange ')(' to '()' and get a balanced string of length 2.**/


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,i,c1,c2,size;
	string s;
	cin>>n;
	while(n--)
	{
	    cin>>size;
	    cin>>s;
	    c1=c2=0;
	    for(i=0;i<size;i++)
	    {
	        if(s.at(i)=='(')
	        c1=c1+1;
	    }
	    for(i=0;i<size;i++)
	    {
	        if(s.at(i)==')')
	        c2=c2+1;
	    }
	    if(c1==c2)
	    cout<<(c1+c2)<<endl;
	    else if(c1<c2)
	    cout<<(2*c1)<<endl;
	    else if(c2<c1)
	    cout<<(2*c2)<<endl;
	    else
	    continue;
	}
	return 0;
}
