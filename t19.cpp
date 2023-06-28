#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long t;
	cin>>t;
	while(t>0)
	{
		long n,p;long s=0;
		cin>>n>>p;
		char ch[n];
		long a[n];
		for(long i=0;i<n;i++)
		{
			cin>>ch[i];
			
			long d=26;
			for(char c='A';c<='Z';c++)
			{
				if(ch[i]==c)
				{
					a[i]=d;break;
				}
				d--;
			}
			s=s+a[i];
			
		}
		cout<<s<<endl;
		sort(a,a+n);long ts=s;long ct=0;
		for(long i=0;i<n;i++)
		{
			ts=ts-a[i];
			if(ts>=p)
			{
				ct++;
			}
		}
		cout<<ct<<endl;
		t--;
	}
	return 0;
}
