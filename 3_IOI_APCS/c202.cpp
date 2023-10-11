#include <bits/stdc++.h>
using namespace std;

long long int gcd( long long int a, long long int b){
    return (b==0)?a:gcd(b,a%b);
}

int main()
{

    int n;
    long long int out,temp;

    scanf("%d",&n);
    scanf("%lld",&out);
    for(int i=1;i<n;i++){
        scanf("%lld",&temp);
        out = gcd(out,temp);
    }
    printf("%lld\n",out);
    return 0;
}