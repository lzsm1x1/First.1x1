#include<bits/stdc++.h>
using namespace std;
unsigned long long F(int n);
int main(void)
{
	int aa;
	cin>>aa;
	unsigned long long sum=0;
	for(int i=1;i<=aa;i++)
	{
		sum += F(i);
	}
	cout<<sum<<endl;
	
	
	return 0;
}

unsigned long long F(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else
	{
		return F(n-1)*n;
	}
}
