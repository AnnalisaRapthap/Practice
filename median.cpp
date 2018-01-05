#include<iostream>
using namespace std;
int median(int arr[],int size)
{
	int i,j,temp;
	double me;
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	if(size%2==0)
	{
		int mi=size/2;
		me=(arr[mi]+arr[mi+1])/2;
	}
	else
	me=arr[size/2];
	return me;
	
}
int main()
{
	int i, s;
	cout << "Enter the size of the array" << endl;
	cin >> s;
	int a[s];
	cout << "Enter the values" << endl;
	for(i=0;i<s;i++)
	{
		cin >> a[i];
	}
	double m=median(a,s);
	cout << "The median=" << m;
}
	
