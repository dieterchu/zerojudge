#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
   unsigned long long int table[51][3];
   int n;
    
   memset(table,0,sizeof(table));    
   table[1][0]=table[1][1]=table[1][2]=1;
   for(int i=2;i<51;i++){
      table[i][0]=  table[i-1][0]+ table[i-1][2];
      table[i][1]=  table[i-1][1]+table[i-1][2];
      table[i][2]=  table[i-1][0]+table[i-1][1]+table[i-1][2];
   }
    scanf("%d",&n);
    printf("%llu\n",table[n][0]+table[n][1]+table[n][2]);
  
    return 0;
}