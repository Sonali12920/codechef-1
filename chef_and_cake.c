#include <stdio.h>

int main(void) {
	int i, j, k, a, b, n, c1, c2;
	char A[100][100];
	scanf("%d", &n);
	for(i=0; i<n; i++){
	    c1=0; c2=0;
	    scanf("%d %d", &a, &b);
	    for(j=0; j<a; j++){
	        scanf("%s", A[j]);
	        }
	    for(j=0; j<a; j++){
	        for(k=0; k<b; k++){
	            if((j+k)%2 == 0){
	                if(A[j][k]=='R'){
	                    c2+=5;
	                }
	                else if(A[j][k]=='G'){
	                    c1+=3;
	                }
	                
	            }
	            else{
	                 if(A[j][k]=='R'){
	                    c1+=5;
	                }
	                else if(A[j][k]=='G'){
	                    c2+=3;
	                }
	            }
	        }
	    }
	    if(c1<=c2){
	        printf("%d\n", c1);
	    }
	    else{
	        printf("%d\n", c2);
	    }
	}
	return 0;
}

