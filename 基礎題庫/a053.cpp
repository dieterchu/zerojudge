#include <iostream>
using namespace std;

int main() {

    int N;
    cin>>N;
    if(N<=10)
        cout<<6*N;
    else if(10<N && N<=20)
        cout<< 60+2*(N-10);
    else if(20<N && N<=40)
        cout<< 80+1*(N-20);
    else
        printf("100");
    return 0;
}
