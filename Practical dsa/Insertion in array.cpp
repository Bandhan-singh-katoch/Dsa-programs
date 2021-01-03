/*EXPERIMENT NO. 1
Write a program to insert a new element at end as well as at a given position in an array.
Source Code:-*/

#include<iostream>
using namespace std;
int main()
{
	int i,n,item,ch,loc;
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
	
	cout<<"\n Enter the element for insertion = ";
	cin>>item;
	cout<<"\n Enter your choice : 1.At End   2.At another location = ";
	cin>>ch;
	switch(ch)
	{
		case 1: a[n] = item;
		        break;
		case 2: cout<<"\n Enter the location for insertion = ";
		        cin>>loc;
		        loc--;
				for(i=n;i>loc;i--)
				{
					a[i] = a[i-1];
					
				}
				a[loc]=item;       
	}
	n=n+1;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	return 0;
	
}
