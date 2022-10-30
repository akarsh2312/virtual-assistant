#include<iostream>
using namespace std;

int main()
{
	int k,j,n,i;
	cout<<"Enter the number : ";
	cin>>n;
	int p=1;
	int sum=0;
	i=n;
while(i>0)
	{
		k=i%10;
		for(j=k;j>0;j--)
		{	
			p=p*j;
		}
		
		sum=sum+p;
		i=i/10;
		p=1;
	}
	if(sum==n)
	cout<<"It is a Strong Number .";
	else
	cout<<"It is not a Strong Number ";
}
