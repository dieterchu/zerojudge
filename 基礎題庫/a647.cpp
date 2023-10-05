#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    scanf("%d",&n);
    while(n--){
        double m,p,x;
        scanf("%lf%lf",&m,&p);
        x = (p-m)/m*100;
        if(x>0)
            x+=0.00001;
        if(x<0)
            x-=0.00001;
        printf("%6.2lf%% %s\n",x,(x>=10||x<=-7)?"dispose":"keep");
    }
   return 0;
}