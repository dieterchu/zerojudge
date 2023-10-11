#include <bits/stdc++.h>


using namespace std;
int main(){

   int n;
   while(cin>>n){
      vector <int> number;
      for(int i=0;i<n;i++){
        int num;
        cin>>num;
        number.push_back(num);
      }
      sort(number.begin(),number.end());
      for(int i=0;i <number.size();i++)
         cout<<number[i]<<" ";
      cout<<"\n";
   }
   return 0;

}
