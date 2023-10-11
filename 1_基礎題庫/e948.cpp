#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N;
    
    cin>>N;
    for(int i=0;i<N;i++){
        int G, A,H,W;
        cin>>G>>A>>H>>W;
        double BMR;
        if(G==1)
           BMR = (13.7*W)+(5.0*H)-(6.8*A)+66;
        else
          BMR = (9.6*W)+(1.8*H)-(4.7*A)+655;        
        cout<<fixed<<setprecision(2)<<BMR<<endl;        
    }
    return 0;
}