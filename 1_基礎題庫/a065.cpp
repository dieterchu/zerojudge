#include <iostream>

using namespace std;
int main()
{
  string password;

  while(cin>>password){
    for(int i=0;i<6;i++)
      cout<<abs(password[i+1]-password[i]);

    cout<<"\n";
  }

  return 0;
}
