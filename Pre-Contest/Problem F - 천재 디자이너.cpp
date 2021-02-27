#include <bits/stdc++.h>

using namespace std;

string color;
int q, len;
int q_start[100005];
int q_end[100005];
int favor[100005];
int sum[30][100005];

bool check_color(int k)
{
    // Prefix Sum Ended

    for (int i = 0; i < 26; i++)
    {
        for (int j = 1; j <= len; j++)
        {
            sum[i][j] = sum[i][j - 1];

            if (color[j - 1] == 'a' + i && favor[j - 1] <= len - k)
                sum[i][j]++;
        }
    }

    // Check Q partitions if make conditions

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < q; j++)
        {
            if (sum[i][q_end[j]] - sum[i][q_start[j] - 1] > 1)
                return false;
        }
    }

    return true;
}

int main(void)
{
    cin >> color;
    len = color.length();

    scanf("%d", &q);

    for (int i = 0; i < q; i++)
        scanf("%d %d", &q_start[i], &q_end[i]);

    for (int i = 0; i < len; i++)
    {
        int rank = len - i;
        int index;
        scanf("%d", &index);
        favor[index - 1] = rank;
    }

    int low = 0;
    int high = len;
    
    while (low < high)
    {
        int middle = (low + high) / 2;

        if (check_color(middle))
            high = middle;

        else
            low = middle + 1;
    }

    printf("%d", low);

    return 0;
}