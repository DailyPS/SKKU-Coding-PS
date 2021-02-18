#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b ,&c, &d);

    if (a < b && b < c && c < d)
        printf("Uphill");

    else if (a > b && b > c && c > d)
        printf("Downhill");

    else if (a == b && b == c && c == d)
        printf("Flat Land");

    else
        printf("Unknown");

    return 0;
}