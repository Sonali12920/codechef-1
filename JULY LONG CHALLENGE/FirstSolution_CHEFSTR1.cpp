#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int tc,n,i,result;
	cin>>tc;
	while(tc--)
	{
		long int cnt = 0;
		cin>>n;
		//long int arr[n];
		vector<long int>vect;		
		for(i=0;i<n;++i)
		{
			//cin>>arr[i];
			long int input;
			cin>>input;
			vect.push_back(input);		
		}
		for(i=0;i<n-1;++i)
		{
			result = abs(vect[i]-vect[i+1])-1;
			cnt = cnt + result;		
		}
		cout<<cnt<<"\n";
	}
}
