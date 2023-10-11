#include <iostream>

using namespace std;

int main()
{  int r[3]={0};
   int i,n,x;

   cin>>n;
   while(n--){
     int x;
     cin>>x;
     r[x%3]++;
   }
   cout<<r[0]<<" "<<r[1]<<" "<<r[2];

    return 0;
}
