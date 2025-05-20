#include <bits/stdc++.h>
#define ll long long
#define vll vector<long long>
#define vpll vector<pair<ll, ll>>
#define mapll map<ll, ll>
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl "\n"
#define debug(x) cout<<#x<<" "<<x<<nl;
#define vebug(x) cout<<#x<<" ";_print(x); cout<<nl;
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
 
 int t;
 cin>>t;
 while(t--){
   int n;
    cin>>n;
    vll v(n);
    for0(i,n) cin>>v[i];

    if(n==1) {
        cout<<v[0]<<nl;
        continue;
    }

    vll ans;
    ll res = LLONG_MIN,sum=0;
    for0(i,n){
        sum+=v[i];
    }
    res = sum;
    sum = 0;
    while(n!=1){
        for0(i,n){
            ans.push_back(v[i+1]-v[i]);
        }
        for0(i,(ll)ans.size()){
            sum+=ans[i];
        }
        ans.clear();
        res = max(res,max(sum,-sum));
        n--;
    }
    cout<<res<<nl;
 }
  return 0;
 }
  

