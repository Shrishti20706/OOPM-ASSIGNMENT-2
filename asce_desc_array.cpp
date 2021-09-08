#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(void)
{
	int n,i,j,tmp;
	cout<<"\n Enter size of array : ";
	cin>>n;
	int a[n];
	cout<<"\n Enter element in array :";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\n ascending order : ";
	for(i=0;i<(n-1);i++)
	{
	    for(j=(i+1);j<n;j++)
	    {
	        if(a[i]>a[j])
	        {
	            tmp=a[i];
	            a[i]=a[j];
	            a[j]=tmp;
	        }
	        
	    }
	}
	for(i=0;i<n;i++)
	{
	    cout<<a[i]<<" ";
	}
	
	cout<<"\n descending order :  ";

	for(i=n-1;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
		
return 0;
}

