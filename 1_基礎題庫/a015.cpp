#include <iostream>

using namespace std;

int main()
{  int i,j,m,n;
   int matrix[101][101];

  while(cin>>m>>n){
     for(i=0;i<m;i++)
       for(j=0;j<n;j++)
           cin>>matrix[i][j];

     for(j=0;j<n;j++){
       for(i=0;i<m;i++)
          cout<<matrix[i][j]<<" ";
       cout<<"\n";
     }
  }
  return 0;
}
