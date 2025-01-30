void solve()
{
    // Binary exponentiation. Takes lon(n) time.
    // Lets sat we have base and power 2 and 13 and result 0;
    // 13 is odd so we multiply result with base and decrease power by 1.
    // Now result is 2 and power is 12 which is even.
    // Now power is even we can multiply base with base and divide power by 2.
    // result      Base       Power
    // 0            2          13
    // 2            2          12
    // 2            4          6
    // 2            16         3
    // 32           16         2
    // 32           256        1
    // 8192         256        0

    int number,power;cin>>number>>power;
    ll result=1;
    while(power){
        if(power%2){
            result*=number;
            power--;
        }
        else{
            number*=number;
            power/=2;
        }
    }
    cout<<result<<endl;
}
