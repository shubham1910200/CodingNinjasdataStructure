#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		int j=1;
		while(j<=n-i+1)
		{
			cout<<" ";
			j++;
		}
		
		int k=1;
		int count = i;
		int space =2*i-1;
		while(k<=space)
		{
			if(k<=space/2)
			{
				cout<<count;
				count++;
				}
				else
				{
					cout<<count;
					count--;
				}
				k++;
		}
		i++;
		cout<<endl;
	}
}
