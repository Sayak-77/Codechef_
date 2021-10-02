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
