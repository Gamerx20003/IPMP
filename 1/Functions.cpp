#include <iostream>
#include <cstdio>
using namespace std;

//Only function part is coded by me
//Rest were already in the question ide
int max_of_four(int a,int b,int c,int d)
{
    return (a>b?a:b)>(c>d?c:d)?(a>b?a:b):(c>d?c:d);
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
