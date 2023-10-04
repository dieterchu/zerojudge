
#include <iostream>

using namespace std;

int main()
{
   int n,m;
   int i,sum,count;

   while( cin>>n>>m ){
     int cnt = 1, sum = n;

     for(int i=n+1;sum <=m; i++,cnt++)
        sum = sum + i;
     cout<<cnt<<"\n";
   }
   return 0;
}
