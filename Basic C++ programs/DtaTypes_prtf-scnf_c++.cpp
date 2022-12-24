#include <iostream>
#include <cstdio>    //cstdio is a Header file used to use functions of c in c++ 
using namespace std;
int main() {
    int n;
    long a;
    char ch;
    float m;
    double d;
    scanf("%d %ld %c %f %lf",&n, &a, &ch, &m, &d);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf",n,a,ch,m,d);
    return 0;
}