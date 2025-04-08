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

vector<string> v;

void cc(string s){
    string str = "";
    FOR(i, 0, sz(s)){
        FORE(j, 0, 4){
           if(char(j+'0') != s[j]) str = s.substr(0, i) + char(j+'0') + s.substr(i+1,sz(s)-i-1), v.pb(str);
        }
    }
}

void solve(){
    string s; cin >> s;
    cc(s);
    string str = "";
    FOR(i, 1, sz(v)){
        cout << v[i] << "\n---\n";
        FOR(j, 0, sz(s)){
            FORE(k, 0, 4){
                string t = v[i];
                if(char(k+'0') != t[k]){
                    str = v[i].substr(0, j) + char(k+'0') + v[i].substr(j+1,sz(s)-j-1);
                    cout << i << " : " << str << "\n";
                    str = "";
                }
            }
            cout << "\n";
        }
        cout << "----\n";
    }

}

int main(){
     ios_base::sync_with_stdio(0); cin.tie(0);
     file("cc");
     // int t; cin>>t; while(t--)
          solve();
}
