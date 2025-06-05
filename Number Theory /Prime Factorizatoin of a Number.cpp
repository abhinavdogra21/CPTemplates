    vi prime_factors;
    while(n>1)
    {
        int pf=hp[n];
        if(pf!=0 ) 
        while(n%pf==0)
        {
            n/=pf;
            prime_factors.push_back(pf);
        }
    }
    for ( auto x : prime_factors)
    {
        cout << x <<  " ";
    }
    // output 5 5 2 2 ( 25 * 4) =100
    // you can either tak hp or lp 