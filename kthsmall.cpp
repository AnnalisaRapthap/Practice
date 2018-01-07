#include<iostream>
using namespace std;
int main()
{
	int s;
	cout << "Enter the size of the array" << endl;
	cin >> s;
	int arr[s];
	cout << "Enter the values" << endl;
	for( int k=0;k<s;k++)
	{
		cin >> arr[k];
	}
	int j,i,temp;
	for(int i=0;i<s;i++)
    for(int j=i+1;j<s;j++)
      if(arr[i]>arr[j])
      {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
	int K;
	cout << "ENter the value of k" << endl;
	cin >> K;
	cout << arr[K-1];
}
