#include <iostream>
using namespace std;

int max(int a[100],int n,int i,int s)
{if(i!=n)
{if(a[i]>s)
{s=a[i];}
return max(a,n,i+1,s);}
else
return s;
}


int min(int a[100],int n,int i,int s)
{if(i!=n)
{if(a[i]<s)
{s=a[i];}
return min(a,n,i+1,s);}
else
return s;
}

int main() {
	int a[100],n;
	cout<<"Enter the number of elements of the first array ";
	cin>>n;
	cout<<"\nEnter the elements ";
	for(int i=0;i<n;i++)
	{cin>>a[i];}
	int b[100],m;
	cout<<"Enter the number of elements of the second array ";
	cin>>m;
	cout<<"\nEnter the elements ";
	for(int i=0;i<m;i++)
	{cin>>b[i];}
	int c[100];
	for(int i=0;i<m+n;i++)
	{if(i<n)
	c[i]=a[i];
	else 
	c[i]=b[i-n];}
	cout<<"\nThe maximum element of both the arrays are "<<max(c,m+n,0,c[0]);
    cout<<"\nThe minimum element of both the arrays are "<<min(c,m+n,0,c[0]);
	return 0;
}
