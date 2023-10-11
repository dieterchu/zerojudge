#include <iostream>
using namespace std;
int days[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},
                 {0,31,29,31,30,31,30,31,31,30,31,30,31}};

int abba(int d){

   int r = d;
   int x = 0;
   for(int i=0,b=1000;i<4;i++){
        x+= (r%10)*b;
        r/=10;
        b/=10;
   }
   return d*10000+x;
}
int leap(int y){
  return int( y%4==0 &&(y%100!=0 ||y%400==0));
}
bool valid(int day){
   int y = day/10000;
   int m = (day%10000)/100;
   int d = day%100;

   if(m>=1 && m<=12 && d>=1 && d<=31){
       return d <= days[leap(y)][m];
   }
   return false;

}
int main()
{

    int  date1,date2;
    while(cin>>date1>>date2){
       int y1=date1/10000,y2=date2/10000;
       int ans=0;
       for(int i=y1;i<=y2;i++){
            int day = abba(i);
            if((day>=date1 && day<=date2) && valid(day)){
                ans++;
            }
       }
       cout<<ans<<'\n';
    }
    return 0;
}