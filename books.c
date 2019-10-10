#include <iostream>
using namespace std;

int main() {
	int n,m,i,j,k,l,  A[100], B[100][100],a,b;
	scanf("%d", &n);
	for (i=0; i<n;i++){
	    scanf("%d", &A[i]);
	        for (j=0; j<A[i]; j++){
	            scanf("%d", &B[i][j]);
	        }
	}
	for (i=0; i<n;i++){
	    k = A[i]-1;
	        for (j=0; j<A[i]; j++){
	           // a=i;
	           // b=j;
	            l=k;
	            if(B[i][j] == B[i][j+1]){
	                b=j;
	                while(B[i][b] == B[i][b+1])
	                {
	                   l--;
	                   b++;
	                   
	                }
	                k--;
	                printf("%d ", l);
	            }
	            else{
	             printf("%d ", k);
	             k--;
	            }
	        }
	        printf("\n");
	}
	return 0;
}
