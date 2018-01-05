#include<iostream>
using namespace std;
int highest(int s, int a[])
{
	int max;
	int j;
	for(j=0;j<s;j++)
	{
		if(j==0)
		max=a[j];
		else if(j>0)
		{
			if(a[j]>max)
			max=a[j];
			else
			max=max;
		}
	}
	return max;
       	
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
	int max=highest(size,arr);
	cout << "The highest number is=" << max;
}
