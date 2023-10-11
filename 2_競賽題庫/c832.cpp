#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int j = 0; j < n; j++) {
      pair<int,int> a[3];
      map<int,int> b;
      int x, y;
        for (int i = 0; i < 3; i++) {
          cin >> x >> y;
          b[x]++;
          b[y]++;
          a[i].first=min(x,y);
          a[i].second=max(x,y);
        }
      if(b.size()<=2)
        cout << "No" << "\n";      
      else
        cout << "Yes" << "\n";
    }
	return 0;
}