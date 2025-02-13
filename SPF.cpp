// Smallest prime factor
// what we are doing here is marking every number with its smallest prime factor
// For SPF of number we are iterating for backwards and dividing the number by its SPF and moving to next number obtained by dividing the number by its SPF 

vll sieve(ll n) {
    vll spf(n + 1);
    iota(spf.begin(), spf.end(), 0); // Initialize spf[i] = i
    for(ll p=2;p*p<=n;p++){
        if(spf[p]==p){ // p is prime
            for(ll i=p*p;i<=n;i+=p){
                if(spf[i]==i)spf[i]=p; // Assign smallest prime factor
            }
        }
    }
    return spf;
}

void solve() {
    ll n;cin >> n;
    vll spf = sieve(n);
    while(n!=1){
        cout<<spf[n]<<" ";
        n/=spf[n];
    }
}
