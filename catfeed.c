#include <stdio.h>

int main(void) {
	int i, j, n, a, b, A[1000], flag,k,l;
	scanf("%d", &n);
	for(l=0; l<n; l++){
	    scanf("%d %d", &a, &b);
	    for(j=0; j<b; j++){
	        scanf("%d", &A[j]);
	    }
	    flag = 0;
	    for(i=0;i<b;i=i+a){
	    for(j=i;j<i+a && j<b;j++){
	        for(k=j+1;k<i+a && k<b;k++){
	            if(A[j]==A[k]){
	                flag=1;
	                break;
	            }
	            if(flag==1)
	            break;
	        }
	        if(flag==1)
	        break;
	    }
	    }
	    if(flag == 0){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

