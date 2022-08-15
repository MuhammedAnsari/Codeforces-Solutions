#include <iostream>
using namespace std;
 
int main()
    {
	int a[1000],i,j,n,k,count=0;
	cin>>n>>k;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(j=1;j<=n;j++)
	{
			if(a[k]<=a[j] && a[j]!=0)
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}