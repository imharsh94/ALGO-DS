#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ll n, a;
  cin >> n;
  ll price[n];
  set<ll> s;
  set<ll>::iterator it;

  for (int i = 0; i < n; i++) {
    cin >> a;
    price[i] = a;
  }

  s.insert(price[0]);
  ll ans = INT_MAX;

  ll maximum = 0LL;
  maximum = max(price[0], maximum);

  for (int i = 1; i < n; i++) {
    if (maximum > price[i]) {
      it = s.upper_bound(price[i]);
      ll temp = *it - price[i];
      ans = min(ans, temp);
    }
    s.insert(price[i]);
    maximum = max(price[i], maximum);
  }

  cout << ans << '\n';

  return 0;
}
