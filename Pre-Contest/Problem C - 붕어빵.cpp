#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int cus;
    int mer[1005];
    int consec[1005];
    int ans = -1;

    scanf("%d", &cus);

    for (int i = 0; i < cus; i++)
        scanf("%d", &mer[i]);

    for (int i = 0; i < cus; i++)
    {
        int cnt = 0;
        int temp = -1;

        for (int j = i; j < cus; j++)
        {
            if (mer[i] == mer[j])
                cnt++;

            else if (mer[i] != mer[j])
            {
                if (temp < 0)
                    temp = mer[j];

                else
                {
                    if (temp == mer[j])
                        continue;

                    else
                        break;
                }
            }
        }

        consec[i] = cnt;
    }

    for (int i = 0; i < cus - 1; i++)
    {
        if (ans < consec[i])
            ans = consec[i];
    }

    printf("%d", ans);

    return 0;
}