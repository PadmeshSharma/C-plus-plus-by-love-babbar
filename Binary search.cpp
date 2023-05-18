#include<iostream>
using namespace std;

BinSearch(int a[],int n,int key)
{
	int low=0,high=(n-1);
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(key==a[mid])
		{
			return mid;
		}
		else if(key<a[mid])
		{
			high=mid-1;
		}
		else if(key>a[mid])
		{
			low=mid+1;
		}
	}
	return -1;
}

int main()
{
	int n,i,a[100],key;
	cout<<"Enter no of elements of an array";
	cin>>n;
	cout<<"Enter elements of an array";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the element to be searched";
	cin>>key;
	int index= BinSearch(a,n,key);
	cout<< "Index of element "<<key<<" is "<<index;
	return 0;
}

