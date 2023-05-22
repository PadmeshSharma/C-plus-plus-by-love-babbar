#include<iostream>
using namespace std;

void Sortarr(int arr[],int n)
{
	int left=0;
	int right =(n-1);
	while(left<right)
	{
		if(arr[left]==0)
		{
			left++;
		}
		else if(arr[right]==1)
		{
			right--;
		}
		else if(arr[left]==1 && arr[right]==0)
		{
			int temp=arr[left];
			arr[left]=arr[right];
			arr[right]=temp;
			left++;
			right--;
		}
	}
}

void Printarr(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
}

int main()
{
	int i,n,arr[100];
	cout<<"Enter no of elements in an array";
	cin>>n;
	cout<<"Enter elements of an array";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	Sortarr(arr,n);
	Printarr(arr,n);
}

