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
mapll m;
int n;

bool query(ll i){
   
  
       
   }
   
   int y;
   if(i-1 <= 0 || i-1 > n){
       y = INT_MAX;
   }
   else{
       if(m.find(i-1)!=m.end()){
           y = m[i-1];
       }
       else{
   cout<<"? "<<i-1<<endl;
   cin>>y;
   m[i-1] = y;
       }
   
   }
   
   return y>x;
}

int main() {
// ios::sync_with_stdio(0); 
// cin.tie(0);
// cout.tie(0);


   cin>>n;
   m.clear();
   int l=0, r = n+1;
   
   while(l<r){
       int mid = (l+r)/2;
       
       if(query(mid)){
           if(!query(mid+1)){
               cout<<"! "<<mid<<endl;
               break;
           }
           else l = mid;
       }
       else r = mid;
   }

 
  return 0;
 }
  


  
