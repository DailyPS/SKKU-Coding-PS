#include <bits/stdc++.h>

using namespace std;

long long int sum = 0;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  while(true)
  {
    long long int n;
    cin >> n;

    if (n == -1)
      break;

    sum += n;
  }

  cout << sum;

  return 0;
}