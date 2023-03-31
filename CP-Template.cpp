#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;

#define test ll b; cin >> b; while(b--) {Solve(); nl}
#define FST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define CS ll c = 1, t = 1; cin >> t; while(t--){cout << "Case " << c << ": "; Solve(); c++; nl}

#define f(i, x, n) for(ll i = x; i < n; i++)
#define frev(i, x, n) for(ll i = n; i >= x ; i--)

#define nl cout << "\n";
#define yes cout << "YES";
#define no cout << "NO";

using namespace std;

const ll sz = 1e7 + 5;

vector <ll> prime; 
int mark[sz]; 

void Seive () 
{
    mark[0] = mark[1] = 1;
 
    prime.push_back(2); 
    for ( int i = 4; i <= sz; i += 2 ) 
    {
        mark[i] = 1;
    }
 
    int sqrtn = sqrt(sz);

    for ( int i = 3; i <= sqrtn; i += 2 ) 
    {
        if ( mark[i] == 0 ) 
        {
            for ( int j = i * i; j <= sz; j += 2 * i ) 
            {
                mark[j] = 1;
            }
        }
    }
 
    for ( int i = 3; i <= sz; i += 2 )
    {
        if ( mark[i] == 0 )
        {
            prime.push_back(i);
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

ll __lcm(ll a, ll b)
{
    return (a / __gcd(a , b)) * b;
}

void Solve()
{
    
}


int main()
{
    FST;

    //CS

    test 
    
   // Solve(); 
    
}