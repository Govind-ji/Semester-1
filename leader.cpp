#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k=0,g,max;
	cout<<"Enter the length of the array"<<endl;
	cin>>n;
	int a[n],b[n];
	cout<<"Enter the elements of the array"<<endl;
	for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
{
	max=a[i];
	for(j=i+1;j<n;j++)
	{
	
		if(a[j]>max && a[j]!=0)
	{
	     max=a[j];		
	}
    }
    
    if(max!=0 && max!=b[k-1])
	b[k++]=max;
}
cout<<"Leader of array=";

for(i=0;i<k;i++)
cout<<b[i]<<" ";
}
