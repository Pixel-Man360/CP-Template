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

const ll sz = 1e7 + 5;

vector <ll> mark; 
char prime[sz]; 

void Seive () 
{
    prime[0] = prime[1] = 1;
 
    mark.push_back(2); 
    for ( int i = 4; i <= sz; i += 2 ) 
    {
        prime[i] = 1;
    }
 
    int sqrtn = sqrt(sz);

    for ( int i = 3; i <= sqrtn; i += 2 ) 
    {
        if ( prime[i] == 0 ) 
        {
            for ( int j = i * i; j <= sz; j += 2 * i ) 
            {
                prime[j] = 1;
            }
        }
    }
 
    for ( int i = 3; i <= sz; i += 2 )
    {
        if ( prime[i] == 0 )
        {
            mark.push_back(i);
        }
    }
}

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