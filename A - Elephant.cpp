#include <iostream>
using namespace std;
 
int main() {
	int x,count=1,i;
	cin>>x;
	if(x>5)
	{
		for(i=5;i<x;i=i+5)
    	{
    		count++;
    	}
    	cout<<count;
	}
	else
	cout<<count;
	return 0;
}