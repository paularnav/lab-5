#include <iostream>
using namespace std;

int sum(int a[100],int n,int i,int s)
{s=s+a[i];
if(i+1==n)
return s;
else 
return sum(a,n,i+1,s);
}

int main() {
	int a[100],n;
	cout<<"Enter the number of elements of the array ";
	cin>>n;
	cout<<"\nEnter the elements ";
	for(int i=0;i<n;i++)
	{cin>>a[i];}
	cout<<"\nThe sum of elements is "<<sum(a,n,0,0);
	return 0;
}
