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
set<char> v;
vector<int> a;
void check(string s){
    a.clear();
    FOR(i, 0, sz(s)) a.pb(s[i]-65);
    sort(a.begin(), a.end());
    for(auto x : a) cout << x << " ";
}

void solve(){
    string s; cin >> s;
    s = s + s[sz(s)-1];
    FOR(i, 0, sz(s)-1){
        string str = "";
        int j = i;
        while(v.find(s[j]) == v.end()){
            v.insert(s[j]);
            str += s[j];
            ++j;
        }
        cout << str << "\n";
        check(str); cout << "\n";
        str = "";
        v.clear();

    }

}

int main(){
     ios_base::sync_with_stdio(0); cin.tie(0);
     //file("cc");
     // int t; cin>>t; while(t--)
          solve();
}

