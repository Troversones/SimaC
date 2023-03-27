#include <stdio.h>

float szamtani_szorzat(float a0, float a1, int n, int m);
float mertani_osszeg(float b0, float b1, int n);
float differenciafuggvenyes(float c0, float d0, float q, int n);


float mertani(float a0, float q, int n){
    if (n == 0)
    {
        return a0;
    }
    
    return mertani(a0 , q, n-1) * q;
}

int main() {

    printf("%f\n", szamtani_szorzat(2, 5, 2, 3));
    printf("%f\n", mertani_osszeg(1, 2, 4));
    printf("%f\n", differenciafuggvenyes(5, 1, 2, 3));

    return 0;
}

float differenciafuggvenyes(float c0, float d0, float q, int n) {
    // cn = c(n-1) + d(n-1)
    if (n == 0)
    {
        return c0;
    }
    
    return differenciafuggvenyes(c0, d0, q, n-1) + mertani(d0, q, n-1);
}

float mertani_osszeg(float b0, float b1, int n){
    float eredmeny = 0;
    float q = b1 / b0;
    for (int i = 0; i < n; i++)
    {
        eredmeny += mertani(b0, q, i);
    }
    
    return eredmeny;
}

float szamtani_szorzat(float a0, float a1, int n, int m){
    float d = a1 - a0;
    return (a0 + n*d) * (a0 + m*d);
}