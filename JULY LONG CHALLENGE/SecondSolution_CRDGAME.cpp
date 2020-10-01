#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int rounds;
		cin>>rounds;
		int cook,morty;	
		int cnt=0;
		int cntr=0;	
		while(rounds--)
		{
			cin>>cook>>morty;
			int result1=0;
			int mod1=0;
			int result2=0;
			int mod2=0;
			if(cook/10!=0)
			{
				while(cook!=0)
				{
					mod1=cook%10;
					cook=cook/10;
					result1=result1+mod1;
				}
			}else
			{
				result1=cook;
	
			}

			if(morty/10!=0)
			{
				while(morty!=0)
				{
					mod2=morty%10;
					morty=morty/10;
					result2=result2+mod2;	
				}
			}else
			{
				result2=morty;
			}

			if(result1>result2)
			++cnt;				
			else if(result1<result2)
			++cntr;	
			else if(result1==result2)
			{
			    ++cnt;
			    ++cntr;
			}		
		}	
			if(cnt>cntr)	
			{
				cout<<0<<" "<<cnt<<"\n";			
			}else if(cntr>cnt)
			{
				cout<<1<<" "<<cntr<<"\n";
			}else
			{
				cout<<2<<" "<<cnt<<"\n";
			}
	}
}
