#include <iostream>
using namespace std;
int main()
{
	int n,x;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
    }
    int b;
    cin>>b;
    for(int i=0;i<b;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    	if(a[j]== -1)
    	{
    		x+=a[j];
		}
		else if(a[n-1]== -1)
		{
			cout<<a[n-1];
		}
	}
	}
	cout<<x;
	
}
