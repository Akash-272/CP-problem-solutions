#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <queue>
#include <stack>
#include <map>
#include <set>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define vl vector<ll>
#define vpii vector<pii>
#define all(c) c.begin(), c.end()
#define tr(c, it) for (auto it = c.begin(); it != c.end(); it++)
#define sz(a) int((a).size())
#define mem(a, val) memset(a, val, sizeof(a))

const int MOD = 1e9 + 7;
const int INF = 1e9;

ll gcd(ll a, ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

bool istriangle(ll a,ll b,ll c)
{
    if(a+b>c && b+c>a && a+c>b)
        return true;
    return false;
}

void solve()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<b<<" "<<c<<" "<<d<<endl;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}