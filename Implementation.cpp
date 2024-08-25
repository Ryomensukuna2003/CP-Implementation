//                     「本 物 の 柔 術 を 見 せ て や る」

#include <bits/stdc++.h>
using namespace  std;

// --------------------------------PBDS--------------------------------------------------
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace  __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> pbds;
// --------------------------------PBDS--------------------------------------------------

// --------------------------------Mod--------------------------------------------------
ll mod(ll x) { return (x % M); }
ll mod_minus(ll a, ll b){
    ll ans = (mod(a) - mod(b));
    if (ans < 0) ans = mod(ans + M);
    return ans;
}
ll mod_mul(ll a, ll b) { return mod(mod(a) * mod(b)); }
ll mod_add(ll a, ll b) { return mod(mod(a) + mod(b)); }
ll power(ll a, ll n){
    if (n == 0) return 1;
    else if (n == 1) return a;
    ll R = power(a, n / 2) % M;
    if (n % 2 == 0) return mod(mod_mul(R, R));
    else return mod(mod_mul(mod_mul(R, a), mod(R)));
}
ll mod_div(ll a, ll b){
    ll ans = mod(a);
    ll b1 = power(b, M - 2);
    ans = mod(mod_mul(ans, b1));
    return ans;
}
// --------------------------------Mod--------------------------------------------------


// For checking String 1 in string 2
bool substringcheck(string s1,string s2){
    // String 1 in String 2
    if (s2.find(s1) != std::string::npos) return true;
    else return false;
}

// vector has to sorted
void rem_dup_order(vector<ll> &vec1) {
  auto it = unique(vec1.begin(), vec1.end());
    vec1.resize(distance(vec1.begin(), it));
}

// For creation of Boolean Matrix 
bool g[100][100]={};

// Cool way to check even odd (Faster)
if(n&1) cout<<"ODD"<<endl;
else cout<<"EVEN"<<endl;
    

// Check if Power of 2 O(1)
// Not works if n==0
if(n&(n-1)) cout<<"Not a power of 2"<<endl;
else cout<<"Power of 2"<<endl;

// If x/(2^k)
(x>>k)
// If x*(2^k) 
(x<<k)

 // To find number of set bits in binary
 __builtin_popcount(x); // for int
 __builtin_popcountll(x); // for long long

// Lower bound Index
cout<<lower_bound(c,c+n,b[j])-c+1<<endl;
// Lower bound on Vector
vector<ll>::iterator low;
	low=lower_bound(all(vec1),target);
	cout<<low-vec1.begin();
	

// Binary Search for lower bound (not exactly lower_bound)
int binary_search(vector<ll>& nums, int target) {
  int l = 0,r = nums.size() - 1;
  while (l <= r) {
    int mid = l + (r - l) / 2;
    if (nums[mid] == target) {
      return mid;
    }
    else if (target < nums[mid]) {
      r = mid - 1;
    }
    else {
      l = mid + 1;
    }
  }
  return r;
}
