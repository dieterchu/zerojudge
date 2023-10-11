#include <iostream>
#include <map>
using namespace std;

int main (){
   map<int,int> mymap;
   map<int, int>::iterator iter;

   int n;
   while(cin>>n){
      for(int i=0;i<n;i++){
        int data;
        cin>>data;
        iter = mymap.find(data);
        if(iter==mymap.end())
            mymap[data] = 1;
        else
            iter->second = iter->second + 1;
      }
      for(iter=mymap.begin();iter!=mymap.end();iter++)
        cout<<iter->first<<" "<<iter->second<<endl;      
   }
  return 0;
}