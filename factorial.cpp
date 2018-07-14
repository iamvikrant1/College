#include <bits/stdc++.h>
using namespace std;

int main()
{
	long int n,v=1,c;
		cout<<"Factorial of the given number";
		cin>>n;
		c=n+1;
	while(c--!=1)
	{
		v=v*c;
	}
	cout<<v;
	return 0;
}

