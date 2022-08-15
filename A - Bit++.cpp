#include <iostream>
using namespace std;
 
int main() {
	int n,i,x=0;
	cin>>n;
	string s;
	for(i=0;i<n;i++)
	{
		cin>>s;
		if(s[0]=='+' && s[1]=='+' && s[2]=='X')
		{
			x++;
		}
		else if(s[0]=='X' && s[1]=='+' && s[2]=='+')
		{
			x++;
		}
		else if(s[0]=='-' && s[1]=='-' && s[2]=='X')
		{
			x--;
		}
		else if(s[0]=='X' && s[1]=='-' && s[2]=='-')
		{
			x--;
		}
	}
	cout<<x;
	return 0;
}