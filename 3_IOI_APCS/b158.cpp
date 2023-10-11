#include <bits/stdc++.h>
using namespace std;

struct rec{
    int id;
    int chn;
    int mat;
    int eng;
    int total;
};

bool mycmp(rec a, rec b){

   return  (a.total>b.total)  ||
           (a.total==b.total && a.chn>b.chn) ||
           (a.total==b.total && a.chn==b.chn && a.id<b.id);
}

int main(){

   int n;
   vector<rec> data;
   cin>>n;

   for(int i=1;i<=n;i++){
        rec tmp;
        tmp.id = i;
        cin>>tmp.chn>>tmp.mat>>tmp.eng;
        tmp.total = tmp.chn+tmp.mat+tmp.eng;
        data.push_back(tmp);
   }
   sort(data.begin(),data.end(),mycmp);
   for(int i=0;i<5;i++)
      cout<<data[i].id<<" "<<data[i].total<<"\n";
   return 0;
}