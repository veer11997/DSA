#include<iostream>
using namespace std;

int main()
{
int n;
  cin >> n;
  long long sum = 0;
  int cnt = 0;
  int mx = INT_MIN;
  for(int i = 1; i <= n; i++) {
    int x;
    cin>>x;
    if(x >= 0) sum += 1LL * x, cnt++;
    mx = max(mx, x);
  }
  if(cnt) cout << sum << " " << cnt << endl;
  else cout << mx << " " << 1 << endl;
  return 0;
}
