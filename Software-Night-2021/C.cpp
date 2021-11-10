#include <bits/stdc++.h>

using namespace std;

string s;
int dp[2][100005];
stack<int> K, P;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  cin >> s;

  int len = s.length();
  int ans = 0;
  int idx = 1;

  for (int i = 0; i < len; i++)
  {
    if (s[i] == 'K')
    {
      if (P.empty())
      {
        K.push(idx);
        idx++;
        ans++;
      }

      else
      {
        if (!P.empty())
        {
          K.push(P.top());
          P.pop();
        }
      }
    }

    else if (s[i] == 'P')
    {
      if (K.empty())
      {
        P.push(idx);
        idx++;
        ans++;
      }

      else
      {
        if (!K.empty())
        {
          P.push(K.top());
          K.pop();
        }
      }
    }
  }

  cout << ans;

  return 0;
}