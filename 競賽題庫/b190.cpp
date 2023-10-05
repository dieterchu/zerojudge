#include <stdio.h>
int step = 0;

void hanoi(int n, char from, char to, char temp){

   if(n){
     hanoi(n-1,from,temp,to);
     printf("ring %d : %c -> %c\n",n,from , to); step++;
     hanoi(n-1,temp,to,from);
   }
}

void hanoi2colors(int n,char from){


 if(n){

   if(from == 'a'){
      hanoi(n-1,'a','b','c');
      printf("ring %d : a -> c\n",n); step++;
      hanoi2colors(n-2,'b');
   }else if (from == 'b'){
      hanoi(n-1,'b','a','c');
      printf("ring %d : b -> c\n",n); step++;
      hanoi(n-2,'a','c','b');
      printf("ring %d : a -> b\n",n-1); step++;
      hanoi2colors(n-2,'c');
   }else{
      hanoi(n-2,'c','a','b');
      printf("ring %d : c -> b\n",n-1); step++;
      hanoi2colors(n-2,'a');
   }
 }
}
int main() {
    int n;

 while( scanf("%d", &n)!=EOF){
    step = 0;
    hanoi2colors(n,'a');
    printf("共移動了 %d 步\n",step);
  }
    return 0;
}
