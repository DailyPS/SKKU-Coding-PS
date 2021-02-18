#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    char ad[40];
    int cnt = 0;

    scanf("%s", ad);

    for (int i = 0; i < strlen(ad); i++)
    {
        if (ad[i] == 'H' || ad[i] == 'I' || ad[i] == 'N' || ad[i] == 'O' || ad[i] == 'S' || ad[i] == 'X' || ad[i] == 'Z')
            cnt++;

        else
            break;
    }

    if (cnt == strlen(ad))
        printf("YES");

    else
        printf("NO");

    return 0;
}