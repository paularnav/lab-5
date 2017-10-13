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

int sum(int a[100],int n,int i,int s)
{s=s+a[i];
if(i+1==n)
return s;
else 
return sum(a,n,i+1,s);
}

void median(int a[100],int n)
{int c;
c=n/2;
if(n%2!=0)
{cout<<a[c];}
else
cout<<a[c-1]<<" and "<<a[c];
}

int count(int a[100],int n,int s,int f)
{if(n!=0)
{if(a[n]==s)
{f++;}
return count(a,n-1,s,f);}
else
return f;
}


int main() {
	int a[100],n,b,num;
	cout<<"Enter the number of elements of the array ";
	cin>>n;
	num=n;
	cout<<"\nEnter the elements ";
	for(int i=0;i<n;i++)
	{cin>>a[i];}
	cout<<"\nThe maximum element of the array is "<< max(a,n,0,a[0]);
	cout<<"\nThe minimum element of the array is "<< min(a,n,0,a[0]);
	cout<<"\nThe mean of the elements is "<< sum(a,n,0,0)/n;
	for(int i=0;i<n;i++)
	{b=0;
	for(int j=i;j<n;j++)
	 {if(a[i]>a[j])
	 {b=a[j]; 
	 a[j]=a[i];
	 a[i]=b;}}}
	cout<<"\nThe median of the array is ";
	median(a,n);
	int d=0,e=0,mode;
	for(int i=0;i<num;i++)
	{n=num;
	d=count(a,n,a[i],0);
	if (d>e)
	{mode=a[i];
	e=d;}
	}
	cout<<"\nThe mode of the array is "<<mode;
	return 0;
}
