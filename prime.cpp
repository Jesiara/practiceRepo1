#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int f=1;

void prime(int n)
{
	int x;
	if(n<2)
	{
		f=0;
	}
	for(int i=2;i*i<=n;i++)
	{
		while(n%i==0)
		{
			f=0;
			v.push_back(i);
			cout<<i<<" ";
			n/=i;
		}
	}
	if(n>1)v.push_back(n);
}

int main()
{
	int n;
	cin>>n;
	prime(n);
	if(f==0)
	{
		cout<<"Not prime"<<'\n';
		for(int i:v)
		{
			cout<<i<<" ";
		}
	}
	else
	{
		cout<<"prime"<<endl;
	}
		
}