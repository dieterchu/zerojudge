#include <iostream>

using namespace std;

int main()
{
    int c,w;
    int ans;

    cin>>c>>w;
    ans = 0;
    while( c+w>=12 && w>0 ){
       int x =min(c/12 ,w);
       c = c - 12 * x;
       w = w - x;
       c = c + 2*x;
       ans = ans + x;
       if(c<12){
            if(w>= 12-c){
                w = w - (12-c);
                c = 12;               
            }else{
                c = c+w;
                w = 0;
            }
       }
    }
    cout<<ans<<endl;
    return 0;
}