#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char table[13][3]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
int value[13]={1,4,5,9,10,40,50,90,100,400,500,900,1000};


int Roma2value(char *s){
   int sum = 0;
   int i,j,index;
   
   for(i=0;s[i]!='\0';i++){
     for(j=0;j<13;j++){
       if(strncmp(s+i,table[j],strlen(table[j]))==0)                
          index = j;          
     }                           
     sum += value[index];
     if(strlen(table[index])==2)
        i++;                                                          
   }    
    return sum;
}
void value2roma(int v){
     int i;
     
     while(v!=0){
       for(i=12; i>=0;i--){
          while(v >= value[i]){
            printf("%s",table[i]);
            v -= value[i];                 
          }
       }                             
     }
}

int main(int argc, char *argv[])
{ char a[100],b[100];
  int diff,va,vb;

  while(scanf("%s %s\n",a,b)==2){               
    va = Roma2value(a);                   
    vb = Roma2value(b);
    diff = (va > vb)? va - vb : vb - va;   
    if(diff == 0)
      printf("ZERO");
    else
      value2roma(diff);
    printf("\n");          
  }
	
  return 0;
}