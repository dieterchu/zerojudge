#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int N,i,j;
    double x[10],y[10],ans;
    
    while( cin >> N ) {
        for(i=0; i<N; i++)
            cin >> x[i] >> y[i];
        for(i=ans=0; i<N; i++) {
            j = (i+1) % N;
            ans += (x[i] * y[j]) - (x[j] * y[i]);
        }
        if( ans < 0.0) ans = -ans;     
        cout << fixed << setprecision(2) << ans/2.0 << endl;
    }

    return 0;
}