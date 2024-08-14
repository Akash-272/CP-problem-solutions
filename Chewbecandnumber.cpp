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

void solve()
{
    // ll n;
    // cin>>n;
    // ll ans=0;
    // ll p=0;
    // while(n>0)
    // {
    //     ll rem=n%10;
    //     if(rem>4)
    //     {
    //         rem=9-rem;
    //     }
    //     ans=ans+rem*pow(10,p);
    //     p++;
    //     n=n/10;

    // }
    // cout<<ans<<endl;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(i==0 && s[i]>'4' && s[i]!='9')
        {
            s[i]='9'-(s[i]-'0');
        }
        else
        {
            if(s[i]>'4')
            {
                s[i]='9'-(s[i]-'0');
            }
        }
    }
    cout<<s<<endl;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
   
    return 0;
}