/*EXPERIMENT NO. 2
Write a program to perform Linear Search.*/

#include<iostream>
using namespace std;
int main()
{
	int i,n,item,loc=-1;
	cout<<"How many elements that you want to store= ";
	cin>>n;
	int a[n];
	cout<<"\n Enter the elements = ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"\n Entered elements are = \n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	
	cout<<"\n Enter the element for searching= ";
	cin>>item;
	for(i=0;i<n;i++)
	{
		if(a[i]==item)
		{
			loc = i;
			loc++;
			cout<<"\n Item found at location = "<<loc;
		}
	}
	
	if(loc == -1)
	{
		cout<<"\n Item not found.....";
	}
	return 0;
}
