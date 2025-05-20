#include <bits/stdc++.h>
#define ll long long
#define vll vector<long long>
#define vpll vector<pair<ll,ll> >
#define mapll map<ll, ll>
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl "\n"
#define debug(x) cerr<<#x<<" "<<x<<nl;
#define vebug(x) cerr<<#x<<" ";_print(x); cerr<<" ";
#define all(x) (x).begin(), (x).end()
#define for0(a, c) for (ll a = 0; (a) < (c); (a)++)
#define forl(a, b, c) for (ll a = (b); (a) <= (c); (a)++)

using namespace std;

void _print(vll v){  
    cout<<"[ ";
    for0(i,v.size()){
        cout<<v[i]<<" ";
    }
    cout<<"]";
}

int main() {
ios::sync_with_stdio(0); 
cin.tie(0);
cout.tie(0);

 int t = 1;
 //cin>>t;
 while(t--){
    ll n;
    cin>>n;

    vll v(n);
    for0(i,n) cin>>v[i];

    set<ll> s;
    mapll m;
    ll prev = INT_MAX;
    vpll ans;
    for0(i,n){
        if(s.find(v[i]) != s.end()){
            ans.push_back(make_pair(prev+1,i+1));
            s.clear();
            prev = LLONG_MAX;
        }
        else{
        s.insert(v[i]);
        prev = min(prev,i);
        }
    }
  
  if(prev != LLONG_MAX){
     if(ans.size() == 0){
       cout<<-1<<nl;
       continue;
   }
   else{
      ans[ans.size() - 1].second = n;
   }
  }
  
    cout<<ans.size()<<nl;
    for0(i,(int)ans.size()){
        cout<<ans[i].first<<" "<<ans[i].second<<nl;
    }
 }
  return 0;
 }
  
