#include <iostream>
#include <stack>
#include <stdio.h>
#include <vector>
#include <string>

using namespace std;

int main()
{
  string a,b;
  int n,n1,n2;
  stack<int>box;


  while(cin>>a){
    if((a[0]>='0'&&a[0]<='9')||(a[0]=='-'&&a.size()>1))
        box.push(stoi(a));
    else{
        n2=box.top();
        box.pop();
        n1=box.top();
        box.pop();
        switch(a[0])
        {
         case'+':
         box.push(n1+n2);
         break;
         case'-':
         box.push(n1-n2);
         break;
         case'*':
         box.push(n1*n2);
         break;
         case'/':
         box.push(n1/n2);
         break;
      }
    }
  }
  cout<<box.top();
return 0;
}