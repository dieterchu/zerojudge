#include <iostream>
#include <string.h>
char a[3][110000];

int main() {
	int n;
	int i,j,max;
		
   while(scanf("%d",&n)!=EOF){
	 for(i=0;i<n;i++){
		scanf("%s %s %s\n",a[0],a[1],a[2]);	
		max = 0;
		for(j=1;j<3;j++){
			if((strlen(a[max]) < strlen(a[j]) )|| 
			  ( strlen(a[max])==strlen(a[j])&& strcmp(a[max] , a[j]) < 0)   ){
				max = j;
			}			
		}
		printf("%s\n",a[max]);
	 }
   }
   return 0;
}