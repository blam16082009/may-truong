#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fi first
#define se second
#define sz(x) (int)(x).size()
#define lt long int
#define ld long double
#define ull unsigned long long
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORE(i, a, b) for (int i = (a); i <= (b); ++i)
#define FORDE(i, a, b) for (int i = (a); i >= (b); --i)
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define FORA(it, v) for (__typeof(v.begin()) it = v.begin(); it != v.end(); ++it)
#define file(name) if (fopen(name".inp", "r")) { freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout); }
#define All(f) f,f+mxn
#define pb push_back

const int mxn = 1e6 + 11;

void solve(){
    long long a, n, d; cin >> a >> n >> d;
    unsigned long long res = 0;
    FORE(i, 0, n){
        res += pow(a,i*d);
    }
    cout << res;
}

int main(){
     ios_base::sync_with_stdio(0); cin.tie(0);
     //file("dbl");
     // int t; cin>>t; while(t--)
          solve();
}

