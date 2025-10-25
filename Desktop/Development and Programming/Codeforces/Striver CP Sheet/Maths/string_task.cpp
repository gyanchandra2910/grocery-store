#include<bits/stdc++.h>
using namespace std;

bool isVowel(char a)
{
  a = tolower(a);
  return a == 'a' || a == 'o' || a == 'y' || a == 'e' || a == 'u' || a=='i';
}

int main()
{
  string s;
  cin >> s;
  int i = 0;
  string ans= "";
  while (i < s.size())
  {
    if(isVowel(s[i])){i++; continue;}
    else
    {
      s[i] = tolower(s[i]);
      ans += '.';
      ans += s[i];
      i++;
    }
  }
  cout << ans <<endl;
  return 0;
}