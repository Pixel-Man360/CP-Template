#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;

#define test ll b; cin >> b; while(b--)
#define FST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define f(x, n) for(ll i = x; i < n; i++)
#define fj(x, n) for(ll j = x; j < n; j++)
#define frev(x, n) for(ll i = n; i >= x ; i--)
#define frevj(x, n) for(ll j = n; j >= x ; j--)

#define nl cout << "\n";
#define yes cout << "YES";
#define no cout << "NO";

using namespace std;

ll BigMod(ll a, ll b, ll m) 
{
    a %= m;
    ll res = 1;
    while (b > 0) 
    {
        if (b & 1)
            res = res * a % m;

        a = a * a % m;
        b >>= 1;
    }
    return res;
}


ll __gcd (ll a, ll b) 
{
    return b ? __gcd (b, a % b) : a;
}

void Solve()
{
    
}


int main()
{
    FST;

    test 
    {
        Solve();

        nl
    } 
    
}