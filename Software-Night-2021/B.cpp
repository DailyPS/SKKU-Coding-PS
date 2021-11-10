#include <bits/stdc++.h>

using namespace std;

long long int board[10][10];
long long int ans[10][10];
string dir;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
      cin >> board[i][j];
  }

  cin >> dir;

  if (!dir.compare("U"))
  {
    for (int i = 0; i < 8; i++)
    {
      long long int now = board[0][i];
      int idx = 0;

      for (int j = 1; j < 8; j++)
      {
        if (board[j][i] == now)
        {
          now += board[j][i];
          ans[idx][i] = now;

          if (now)
            idx++;
          
          now = 0;
        }

        else if (board[j][i] != 0 && board[j][i] != now)
        {
          ans[idx][i] = now;

          if (now)
            idx++;

          now = board[j][i];
        }
      }

      ans[idx][i] = now;
    }

    for (int i = 0; i < 8; i++)
    {
      for (int j = 0; j < 8; j++)
        cout << ans[i][j] << " ";

      cout << "\n";
    }
  }

  else if (!dir.compare("D"))
  {
    for (int i = 0; i < 8; i++)
    {
      long long int now = board[7][i];
      int idx = 7;

      for (int j = 6; j >= 0; j--)
      {
        if (board[j][i] == now)
        {
          now += board[j][i];
          ans[idx][i] = now;

          if (now)
            idx--;
          
          now = 0;
        }

        else if (board[j][i] != 0 && board[j][i] != now)
        {
          ans[idx][i] = now;

          if (now)
            idx--;

          now = board[j][i];
        }
      }

      ans[idx][i] = now;
    }

    for (int i = 0; i < 8; i++)
    {
      for (int j = 0; j < 8; j++)
        cout << ans[i][j] << " ";

      cout << "\n";
    }
  }

  else if (!dir.compare("L"))
  {
    for (int i = 0; i < 8; i++)
    {
      long long int now = board[i][0];
      int idx = 0;

      for (int j = 1; j < 8; j++)
      {
        if (board[i][j] == now)
        {
          now += board[i][j];
          ans[i][idx] = now;

          if (now)
            idx++;
          
          now = 0;
        }

        else if (board[i][j] != 0 && board[i][j] != now)
        {
          ans[i][idx] = now;

          if (now)
            idx++;

          now = board[i][j];
        }
      }

      ans[i][idx] = now;
    }

    for (int i = 0; i < 8; i++)
    {
      for (int j = 0; j < 8; j++)
        cout << ans[i][j] << " ";

      cout << "\n";
    }
  }

  else if (!dir.compare("R"))
  {
    for (int i = 0; i < 8; i++)
    {
      long long int now = board[i][7];
      int idx = 7;

      for (int j = 6; j >= 0; j--)
      {
        if (board[i][j] == now)
        {
          now += board[i][j];
          ans[i][idx] = now;

          if (now)
            idx--;
          
          now = 0;
        }

        else if (board[i][j] != 0 && board[i][j] != now)
        {
          ans[i][idx] = now;

          if (now)
            idx--;

          now = board[i][j];
        }
      }

      ans[i][idx] = now;
    }

    for (int i = 0; i < 8; i++)
    {
      for (int j = 0; j < 8; j++)
        cout << ans[i][j] << " ";

      cout << "\n";
    }
  }

  return 0;
}