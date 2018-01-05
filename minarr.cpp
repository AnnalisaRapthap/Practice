#include<iostream>
using namespace std;
int smallest(int s, int a[])
{
	int min;
	int j;
	for(j=0;j<s;j++)
	{
		if(j==0)
		min=a[j];
		else if(j>0)
		{
			if(a[j]<min)
			min=a[j];
			else
			min=min;
		}
	}
	return min;
       	
}
int main()
{
	int size;
	cout << "Enter the size" << endl;
	cin >> size;
	int arr[size];
	cout << "Enter the values" << endl;
	for(int i=0;i<size;i++)
	{
	  cin >> arr[i];	
	}
	int min=smallest(size,arr);
	cout << "The smallest number is=" << min;
}
