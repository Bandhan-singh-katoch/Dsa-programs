#include<iostream>
using namespace std;
int i;
void display_arr(int a[],int n)
{
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}

int main()
{
	int k,n,item,ch,loc;
	cout<<"How many elements that you want to store= ";
	cin>>n;
	int a[n];
	cout<<"\n Enter the elements = ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"\n Entered elements are = \n";
	display_arr(a,n);
	
	cout<<"\n Enter your choice for deletion: 1.By value 2.By location = ";
	cin>>ch;
	switch(ch)
	{
		case 1: cout<<"\n Enter the value for deletion = ";
		        cin>>item;
		        for(i=0;i<n;i++)
		        {
		        	if(a[i]==item)
		        	{
		        		loc=i;
		        		for(k=loc;k<n;k++)
				        {
					      a[k] = a[k+1];
					
			        	}
					}
				}
		        break;
		case 2: cout<<"\n Enter the location for deletion = ";
		        cin>>loc;
		        loc--;
		        cout<<"\n We are deleting item= "<<a[loc]<<"\n";
				for(i=loc;i<n;i++)
				{
					a[i] = a[i+1];					
				}
				      
	}
	n--;
	cout<<"\n Array after deletion = ";
	display_arr(a,n);
	
	return 0;
	
}
