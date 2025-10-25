#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int start = -1;
    int ans = 0;
    for(int i = 0; i < s.size(); i++)
    {
      if(s[i] == '1')
      start = i;
      if(s[i] == '0' && start != -1)
      {
        ans++;
      }
    }
    // cout << ans <<endl;
    int final = s.size() - 1;
    while (start != -1 && s[final] == '0')
    {
      ans--;
      final--;
    }
    cout <<  ans <<endl;
    
  }
  
  return 0;
}