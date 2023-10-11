#include <iostream>
using namespace std;

int main()
{   long long int a,b,count;
    int T;

    cin>>T;
    while(T--){
      cin >> a >> b;
      if((a+b)%2 == 1)  // one odd one even
         cout<<">//<"<<endl;
      else if( a % 2 ==1 && b % 2 == 1)  // two odd
         cout<<">\\\\<"<<endl;
      else{   // two even
         count = 0;
         while(a>0 && b>0){
            if(a > b)
                a -= b;
            else
                b -= a;
            count++;
         }
         if(count % 2 == 1 )
            cout<<">//<"<<endl;
         else
           cout<<">\\\\<"<<endl;
      }
    }
    return 0;
}