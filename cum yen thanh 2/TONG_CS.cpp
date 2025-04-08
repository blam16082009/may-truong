// author : blam dep chai //

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
const int m2d = 1e3 + 7;
const int oo_max = 9999999999;
const int oo_min = -9999999999;

int tcs(int n){
    int res = 0;
    while(n){
        res += n%10;
        n/=10;
    }
    return res;
}

int process(int n){
    int res = 0;
    while(n >= 10) n = tcs(n);
    return n;
}
void solve(){
    int a, b; cin >> a >> b;
    long long res = 0;
    FORE(i, a, b) res += process(i);
    cout << res;
}

int main(){
     ios_base::sync_with_stdio(0); cin.tie(0);
     //file("dbl");
     // int t; cin>>t; while(t--)
          solve();
}
