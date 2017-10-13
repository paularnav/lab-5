#include <iostream>
using namespace std;

int klarge(int a[100],int n,int k)
{int c;
c=a[n-k];
return c;}

int ksmall(int a[100],int n,int k)
{int c;
c=a[k-1];
return c;}

int main() {
	int a[100],n,b,k;
	cout<<"Enter the number of elements of the array ";
	cin>>n;
	cout<<"\nEnter the elements ";
	for(int i=0;i<n;i++)
	{cin>>a[i];}
	for(int i=0;i<n;i++)
	{b=0;
	for(int j=i;j<n;j++)
	 {if(a[i]>a[j])
	 {b=a[j]; 
	 a[j]=a[i];
	 a[i]=b;}}}
	 cout<<"\n Enter the value of k to find the kth largest and smallest element of the array ";
	 cin>>k;
	 cout<<"\nThe kth largest element is "<<klarge(a,n,k);
	 cout<<"\nThe kth smallest element is "<<ksmall(a,n,k);
	return 0;
}
