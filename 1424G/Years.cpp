/************      Author :

                L_7

            OKBA HAMDI

                           **************/
#include<bits/stdc++.h>
using namespace std;

    /***************Typedef *************/

typedef         long long ll;
typedef         long double ld;
typedef         vector<ll>vl;
typedef         deque<ll>dq;
typedef         pair<ll,ll>pi;
typedef         priority_queue<ll>pq;
typedef         priority_queue<ll,vector<ll>,greater<ll>>pqg;


    /********** Constantes **************/

const           ll MOD = 1000000007;
const           ll eps=1e-9;
const           double PI=acos(-1);
const           ll N=1e5+5;
const           ll INF=1e18;

            /************  Define  ****************/

#define         F first
#define         S second
#define         pb push_back
#define         ppb pop_back
#define         pf push_front
#define         ppf pop_front
#define         sz(x)  (ll)((x).size())
#define         rep(i,a,b) for(ll i=a;i<b;i++)
#define         L_Headshot_7 ios_base::sync_with_stdio(false);cin.tie(0);
#define         aff(v) for(auto e:v) cout<<e<<" ";cout<<endl;
#define         all(v) v.begin(), v.end()
#define         rall(v) v.rbegin(), v.rend()
#define         READ freopen("d_difficult.in.txt", "r",stdin)
#define         WRITE freopen("outputd.txt", "w",stdout)

            /***************** Useful Functions *********************/

ll division(ll a, ll b) {return a % b == 0 ? a / b : a / b +1;}
ll fact(ll x){return(x<2?1:x*fact(x-1));}
ll binexp(ll a,ll k){ll ans=1;while(k){if(k&1)ans=(ans*a)%MOD;a=(a*a)%MOD;k>>=1;}return ans;}
ll gcd(ll a, ll b){while (b) swap(b, a %= b);return a;}inline ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }ll ext(ll a, ll b, ll& x, ll& y){x = 1, y = 0;ll x1 = 0, y1 = 1, a1 = a, b1 = b;while (b1){ll q = a1 / b1;tie(x, x1) = make_pair(x1, x - q * x1);tie(y, y1) = make_pair(y1, y - q * y1);tie(a1, b1) = make_pair(b1, a1 - q * b1);}return a1;}
string yup(ll a,ll b){if(a%b==0)return to_string(a/b);string ch=to_string(a/b);ll c=a%b;ll g=gcd(c,b);c/=g;b/=g;ch+="+"+to_string(c)+"/"+to_string(b);return ch;}

           /******************Code*********************/
void solve() {
    map<ll,ll>mp;
    ll n;
    cin>>n;
    ll mini=INF;
    while(n--){
        ll a,b;
        cin>>a>>b;
        mp[a]++;
        mp[b]--;
        if(a<mini)mini=a;
    }
    ll inter=0;
    pi ans={0,0};
    for(auto x:mp){
        inter+=x.S;
        mp[x.F]=inter;
        if(inter>ans.S)ans={x.F,inter};
    }
    cout<<ans.F<<" "<<ans.S<<endl;
}
int main()
{
    L_Headshot_7;
    //READ;
    //WRITE;
    //ll test;
    //cin>>test;
   // while(test--){
        solve();
      // }
    return 0;
}
