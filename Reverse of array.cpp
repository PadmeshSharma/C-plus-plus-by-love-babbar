#include<iostream>
#define size 100
using namespace std;

void printarray(int a[],int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<"\t";
	}
}

void reversearray(int a[],int n)
{
	int start=1,end=n;
	
		while(start<=end)
		{
			int temp=a[start];
			a[start]=a[end];
			a[end]=temp;
			start++;
			end--;
		}
	
}

  
int main()
{
	int n,i,a[size];
	cout<<"Enter no of elements";
	cin>>n;
	cout<<"Enter elements of array";
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	reversearray(a,n);
	printarray(a,n);
}
