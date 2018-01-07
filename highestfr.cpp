#include <iostream>
using namespace std;
int hf(int arr[],int size)
{
	int c=0,dc=0,h1,p,q;
	for(p=0;p<size;p++)
	{
		for(q=0;q<size;q++)
		{
			if(arr[p]==arr[q])
			dc++;
		}
		if(dc>c)
		h1=arr[p];
		c=dc;
	}
	return h1;
}
int main() 
{
	int s,h;
	cout << "Enter the size of the array" << endl;
	cin >> s;
	int a[s];
	cout << "Enter the values" << endl;
	for(int i=0;i<s;i++)
	cin >> a[i];
	h=hf(a,s);
	cout << h;
	return 0;
}
