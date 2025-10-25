#include<bits/stdc++.h>
using namespace std;
#define lp(n) for(int i=0; i<n; i++)

void solve()
{
  int n;
  cin >> n;
  vector<int> a(2*n);
  lp(2*n) cin >> a[i];

  sort(a.begin(), a.end());
  cout << a[n]-a[n-1] <<endl;
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