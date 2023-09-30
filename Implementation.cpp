#include <bits/stdc++.h>
using namespace  std;
 
//                                「本 物 の 柔 術 を 見 せ て や る」


// For checking String 1 in string 2
bool substringcheck(string s1,string s2){
    // String 1 in String 2
    if (s2.find(s1) != std::string::npos) return true;
    else return false;
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
	
