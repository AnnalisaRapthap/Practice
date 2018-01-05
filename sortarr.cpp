#include<iostream>
using namespace std;
int main()
{
	int size,i,j,temp;
	cout << "Enter the size of the array" << endl;
	cin >> size;
	int arr[size];
	cout << "Enter the values" << endl;
	for(i=0;i<size;i++)
	{
		cin >> arr[i];
	}
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
	
	cout << "Data after sorting=" << endl;
	for(j=0;j<size;j++)
	{
		cout << arr[j] << " ";
	}
}
	
