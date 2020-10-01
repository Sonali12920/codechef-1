#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
//#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	     long int N,n,x,y;
	    cin>>N;
	    vector< long int>v1 ;
	    vector< long int>v2;
	    n=(4*N)-1;
	    while(n--)
	    {
	        cin>>x>>y;
	        v1.push_back(x);
	        v2.push_back(y);
	    }
	   long  int x1=v1[0];
	   long int y1=v2[0];
	    for(int i=1;i<v1.size();i++ ){
	        x1 = x1 ^ v1[i];
	        y1 = y1 ^ v2[i];
	    }
	    cout<<x1<<" "<<y1<<"\n";
	}
	return 0;
}
