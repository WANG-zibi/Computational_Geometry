#include <bits/stdc++.h>
using namespace std;
const int N = 100010;
#define int long long
int n;
signed main()
{
    cin >> n;
    int ans=n * (n-1) / 2 * (n-2) / 3 * (n-3) / 4;
    cout<<ans<<endl;

    return 0;
}