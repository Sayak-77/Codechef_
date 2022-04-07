/**PROBLEM CODE: LAPIN
 * 
 * Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character. If there are odd number of characters in the string, we ignore the middle character and check for lapindrome. For example gaga is a lapindrome, since the two halves ga and ga have the same characters with same frequency. Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. The two halves contain the same characters but their frequencies do not match.
Your task is simple. Given a string, you need to tell if it is a lapindrome.

Input:
First line of input contains a single integer T, the number of test cases.
Each test is a single line containing a string S composed of only lowercase English alphabet.
Output:
For each test case, output on a separate line: "YES" if the string is a lapindrome and "NO" if it is not.
Constraints:
1 ≤ T ≤ 100
2 ≤ |S| ≤ 1000, where |S| denotes the length of S
Example:
Input:
6
gaga
abcde
rotor
xyzxy
abbaab
ababc


Output:
YES
NO
YES
YES
NO
NO**/



#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	int n,c,i,j,c1,k;
    string s,s1,s2;
	cin>>n;
	while(n--)
	{
	    cin>>s;
	    k=1;
	    c=0;
	    c1=0;
	    s1="";
	    s2="";
	    if(s.length()%2==0)
	    {
	        s1=s.substr(0,(s.length()/2));
	        s2=s.substr(s.length()/2,s.length());
	        for(i=0;i<s1.length();i++)
	        {
	            for(j=0;j<s2.length();j++)
	            {
	                if(s2.at(j)==s1.at(i))
	                c=c+1;
	            }
	            for(j=0;j<s1.length();j++)
	            {
	                if(s1.at(j)==s1.at(i))
	                c1=c1+1;
	            }
	            if(c!=c1)
	            k=-1;
	            else
	            continue;
	        }
	        if(k==1)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        s1=s.substr(0,(s.length()/2));
	        s2=s.substr((s.length()/2)+1,s.length());
	        for(i=0;i<s1.length();i++)
	        {
	            for(j=0;j<s2.length();j++)
	            {
	                if(s2.at(j)==s1.at(i))
	                c=c+1;
	            }
	            for(j=0;j<s1.length();j++)
	            {
	                if(s1.at(j)==s1.at(i))
	                c1=c1+1;
	            }
	            if(c!=c1)
	            k=-1;
	            else
	            continue;
	        }
	        if(k==1)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
