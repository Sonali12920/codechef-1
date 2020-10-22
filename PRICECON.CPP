#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    //for(int i = 1; i<=T; i++)
    while(T--)
    {
        int n, k, sum1 = 0, sum2 = 0;
        cin >> n;
        cin >> k;
        int a[n];
        for (int i=0; i<=(n-1); i++)
        {
            cin >> a[i];
            if (a[i] >= k)
            {
                sum2 = sum2 + k;
            }
            else
            {
                sum2 += a[i];
            }
            sum1 = sum1 + a[i];
        }
        int losscost = 0;
        losscost = sum1 - sum2;
        cout << losscost << endl;
    }
    return 0;
}
