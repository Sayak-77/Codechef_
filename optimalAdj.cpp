#include <iostream>
#include <string.h>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int u;
#define max 50;
char* check(char *x,int n)
{
	int i,k=0;
	for(i=1;i<n;i++)
	{
	    if(x[i]!=x[i-1])
	    x[k++]=x[i-1];
	    else
	    ++i;
	}
	x[k++]=x[i-1];
	x[k]='\0';
	if(k!=n)
	check(x,k);
	else
	return x;
}
int main() {
	// your code goes here
	int t,i;
	string k;
	char s[20];
	char ch;
	cin>>t;
	while(t--)
	{
	    cin>>s;
	    for(i=0;i<strlen(s);i++)
	    {
	        ch=tolower(s[i]);
	        s[i]=ch;
	    }
	    k=check(s,strlen(s));
	    cout<<k.length()<<endl;
	}
	return 0;
}
