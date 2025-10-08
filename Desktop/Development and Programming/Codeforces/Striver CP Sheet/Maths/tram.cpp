#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for(int i = 0; i < n; i++)
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin >> n;
  vector<ll> pre(n);
  loop(n) 
  {
    ll a, b;
    cin >> a >> b;
    if(i == 0)
    {
      pre[0] = b - a;
    }
    else
    {
      pre[i] = pre[i - 1] + b - a;
    }
  }
  ll maxi = *max_element(pre.begin(), pre.end());
  cout << maxi << "\n";


  return 0;
}