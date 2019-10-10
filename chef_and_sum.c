#include <stdio.h>

int main(void) {
	int n, i, j ,k,a,b, A[10000], flag;
	scanf("%d", &n);
	for(i=0; i<n ; i++){
	    flag=0;
	    scanf("%d %d", &a, &b);
	    for (j=0; j<a; j++){
	        scanf("%d", &A[j]);
	    }
	    for(j=0; j<a; j++){
	        for(k=j+1; k<a; k++){
	            if(A[j]+A[k]==b){
	                flag = 1;
	                if(flag == 1){
	                    break;
	                }
	            }
	            if(flag == 1){
	                    break;
	                }
	        }
	    }
	    if(flag==1){
	        printf("Yes\n");
	    }
	    else{
	        printf("No\n");
	    }
	}
	return 0;
}

