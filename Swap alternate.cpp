#include<iostream>
#define SIZE 100
using namespace std;

void swapAlternate(int a[],int n)
{
	for(int i=0;i<n;i=i+2)
	{
		if(i+1<n)
		{
			int temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
}
int main()
{
	int n,a[SIZE];
	cout<<"Enter no of elements"<<endl;
	cin>>n;
	cout<<"Enter elements of an array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	swapAlternate(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
