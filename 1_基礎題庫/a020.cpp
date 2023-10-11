#include <iostream>

using namespace std;

int main()
{ string id;

  int table[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};

  while(cin>>id){
     int value = table[id[0]-'A'];
     value = (value % 10)*9 + value/10;
     for(int i=1;i<9;i++)
       value += (id[i]-'0')*(9-i);

      value += id[9]-'0';
      if(value % 10)
        cout<<"fake\n";
      else
        cout<<"real\n";
  }
  return 0;
}
