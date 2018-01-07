#include <iostream>
#include<string>
#include<cstdio>
using namespace std;

int main()
{
    char name[10];
    cout << "Enter your name" << endl;
    cin.getline(name,10);
    char *n;
    n=name;
    for(int i=0;name[i]!='\0';i++)
    {
        cout << *n << endl;
        n++;
}
}

