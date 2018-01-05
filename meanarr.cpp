#include<iostream>
using namespace std;
int mean(int size, int a[])
{
	int m1,s=0,j;
	for(j=0;j<size;j++)
	{
		s=s+a[j];
	}
	m1=s/size;
	return m1;
}
int main()
{
	int s;
	cout << "Enter the size" << endl;
	cin >> s;
	int i;
	int arr[s];
	cout << "Enter the value" << endl;
	for(i=0;i<s;i++)
	{
		cin >> arr[i]; 
	}
	int m;
	m=mean(s,arr);
	cout << "Mean=" << m;
}
