#include <iostream>
using namespace std;
int sumarr(int a[], int size)
{
	int s=0;
	int i;
	
		cout << "Enter the value" << endl;
	for(i=0;i<size;i++)
	{
		cin >> a[i];
	}
	for(i=0;i<size;i++)
	{
		s=s+a[i];
	}
	return s;
}
int main() 
{
	int sizee, sum;
	cout << "Enter the size of the array" << endl;
	cin >> sizee;
	int arr[sizee];
	sum=sumarr(arr,sizee);
	cout << "The sum=" << sum;
}
	
