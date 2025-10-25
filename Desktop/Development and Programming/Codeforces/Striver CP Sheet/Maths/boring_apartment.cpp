#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >>t;
  while (t--)
  {
    int n;
    cin >> n;
    int digit = n%10, no_of_digit = 0;
    while (n != 0)
    {
      no_of_digit++;
      n = n/10;
    }
    int ans = 0;
    if(digit == 1){
      if(no_of_digit == 1) cout << 1 <<endl;
      if(no_of_digit == 2) cout << 3 <<endl;
      if(no_of_digit == 3) cout << 6 <<endl;
      if(no_of_digit == 4) cout << 10 <<endl;
    }
    else{
      digit--;
      ans += digit*10;
      if(no_of_digit == 1) cout << ans + 1 <<endl;
      if(no_of_digit == 2) cout << ans + 3 <<endl;
      if(no_of_digit == 3) cout << ans + 6 <<endl;
      if(no_of_digit == 4) cout << ans + 10 <<endl;
    }
    
  }
  
  return 0;
}