#include <stdio.h>
int main() {
    int a, b, c, d, e, f;
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
    float x, y;

    if(a*e-b*d!=0)
        printf("x=%.2f\ny=%.2f\n", (float)(c*e-f*b)/(float)(a*e-d*b), (float)(c*d-f*a)/(float)(b*d-e*a));
    else if(a*e-b*d==0 && a*f-c*d==0)
        printf("Too many");
    else
        printf("No answer");
    return 0;
}