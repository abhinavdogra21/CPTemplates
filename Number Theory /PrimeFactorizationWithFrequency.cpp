//prime factors with frequency
map<int,int>prime_factors;
    while(n>1)
    {
        int pf=hp[n];
        while(n%pf==0)
        {
            n/=pf;
            prime_factors[pf]++;
        }
    }
    for ( auto [x,y] : prime_factors)
    {
        cout << x << " " << y << "times" << " ";
    }