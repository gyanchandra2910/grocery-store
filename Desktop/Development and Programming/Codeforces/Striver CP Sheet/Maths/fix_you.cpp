#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m;
  cin >> n >> m;
  vector<vector<char>> a(n,vector<char> (m,0));
  for(int i =0; i < n; i++)
  {
    for(int j = 0; j < m; j++)
      cin >> a[i][j];
  }
  if(n == 1)
  {
    int ans = 0;
    for(int i = 0; i < m - 1;i++)
    {
      if(a[0][i] != 'R') ans++;
    }
    cout << ans <<endl;return;
  }  
  if(m == 1)
  {
    int ans = 0;
    for(int i = 0; i < n - 1;i++)
    {
      if(a[i][0] != 'D') ans++;
    }
    cout << ans <<endl;return;
  }
  int ans = 0;
  for(int i = 0; i < n - 1;i++)
  {
    if(a[i][m - 1] != 'D') ans++;
  }
  for(int i = 0; i < m - 1; i++)
  {
    if(a[n - 1][i] != 'R') ans++;
  }

  cout << ans <<endl;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  
  return 0;
}