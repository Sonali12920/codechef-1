#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc,i,j;
	cin>>tc;
	string arr[8][8];
	while(tc--)
	{
		int k;
		cin>>k;
		int counter=0;
		for(i=0;i<8;++i)
		{
			for(j=0;j<8;++j)
			{
				if(i==0&&j==0)
				arr[i][j]="O";
				else
				arr[i][j]="X";
			}	
		}
		for(int i=0;i<8;++i)
		{
			for(int j=0;j<8;++j)
			{
				if(i==0&&j==0)
				cout<<arr[i][j];			
				else if(counter<k)
				cout<<".";
				else
				cout<<arr[i][j];
				++counter;
			}
			cout<<"\n";	
		}
	}
}

