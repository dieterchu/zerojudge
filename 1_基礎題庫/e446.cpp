#include <bits/stdc++.h>
using namespace std;

int main(){

  vector<int> a;
  int N;

  scanf("%d",&N);
  for(int i=0;i<N;i++)
     a.push_back(i+1);
  do{
    for(auto i : a)
        printf("%d ",i);
    printf("\n");
  }while(next_permutation(a.begin(),a.end()));
  return 0;
}