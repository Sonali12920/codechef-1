#include <iostream>
#include<string.h>
using namespace std;

int main() {
	int t, n, i, j, k,l,m, flag;
	int count;
	int sum;
	char word[100][21];
	scanf("%d", &t);
	for (i=0; i<t; i++){
	    k=0;
	    sum =0;
	    count=0;
	    scanf("%d", &n);
	    for (j=0; j<n; j++){
	        k=0;
	        count = 0;
	        scanf("%s", word[j]);
	        while(word[j][k]!='\0'){
	            if(k==0){
	                count = count + 2;
	            }
	            else{
	                if((word[j][k]=='d' || word[j][k] == 'f') && (word[j][k-1]=='d'||word[j][k-1]=='f')){
	                    count = count + 4;
	                }
	                else if((word[j][k]=='d' || word[j][k] == 'f') && (word[j][k-1]=='j'||word[j][k-1]=='k')){
	                    count = count +2;
	                }
	                else if((word[j][k]=='j' || word[j][k] == 'k') && (word[j][k-1]=='d'||word[j][k-1]=='f')){
	                    count = count +2;
	                }
	                else if((word[j][k]=='j' || word[j][k] == 'k') && (word[j][k-1]=='j'||word[j][k-1]=='k')){
	                    count = count +4;
	                }
	                
	            }

	        k++;
	        }
	        flag =0;
	        for (l=0; l<j && flag == 0; l++){
	           if(!strcmp(word[l], word[j])){
	               flag =1;
	           }
	           else{
	               flag = 0;
	           }
	        }
	        if(flag == 1){
	            count = count/2;
	        }
	       sum = sum + count;
	       //printf("%d\n",sum);
	    }
	    printf("%d\n", sum);
	}
	return 0;
}
