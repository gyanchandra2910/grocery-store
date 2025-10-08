#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for(int i = 0; i < n; i++)
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n, k;
  cin >> n >> k;
  while (k != 0)
  {
    ll rem = n % 10;
    if(rem == 0){n = n/10; k--; continue;}
    else if(rem < k){n = n - rem; k = k - rem; continue;}
    else{n = n - k; k = 0;}
  }
  cout << n << "\n";
}