#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost ::multiprecision ; 
using namespace std;

int main() {
    int a,t;
    cin>>t;
    while(t--)
    {
      cpp_int b=1;
        cin>>a;
        for (int i=1;i<=a;i++)
        {
            b=b*i;
        }
        cout<<b<<endl;
    }
	// your code goes here
	return 0;
}
