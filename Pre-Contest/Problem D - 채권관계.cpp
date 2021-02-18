#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[10005];
int parent[10005];
bool check[10005];

int find_parent(int num)
{
    if (num == parent[num])
        return num;

    return parent[num] = find_parent(parent[num]);
}

void union_rel(int num1, int num2)
{
    num1 = find_parent(num1);
    num2 = find_parent(num2);

    parent[num2] = num1;
}

int main(void)
{
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
        check[i] = false;
    }

    /* making tree */
    for (int i = 0; i < m; i++)
    {
        int f1, f2;

        scanf("%d %d", &f1, &f2);

        int f1_parent = find_parent(f1);
        int f2_parent = find_parent(f2);

        if (f1_parent != f2_parent)
            union_rel(f1_parent, f2_parent);
    }

    int flag = 0;

    if (m != 0)
    {
        for (int i = 0; i < n - 1; i++)
        {
            flag = 0;

            if (!check[i])
            {
                flag += a[i];
                check[i] = true;
            }

            else
                continue;

            for (int j = i + 1; j < n; j++)
            {
                if (check[j])
                    continue;

                int p1 = find_parent(i);
                int p2 = find_parent(j);

                if (p1 == p2)
                {
                    flag += a[j];
                    check[j] = true;
                }
            }

            if (flag < 0)
                break;
        }
    }


    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                flag = -1;
                break;
            }
        }
    }

    if (flag < 0)
        printf("IMPOSSIBLE");

    else
        printf("POSSIBLE");

    return 0;
}