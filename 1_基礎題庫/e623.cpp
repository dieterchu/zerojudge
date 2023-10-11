#include <iostream>

using namespace std;

int main()
{
    int N;
    
    cin>>N;
    int round=1,idx=0,rep=1;
    for(int i=1;i<N;i++){
         rep--;
         if(rep==0){
             idx=(idx+1)%4;
             if(idx==0)
               rep = ++round;
             else
                rep = round;
         }
    }
    if(idx==0)
       cout<<"Pen";
    else if(idx==1)
       cout<<"Pineapple";
    else if(idx==2)
      cout<<"Apple";
    else
      cout<<"Pineapple pen";
    return 0;
}