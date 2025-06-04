 
 // normal 
 vector<bool> isPrime(N+1,true);
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<=N;i++)
    {
        if(isPrime[i])
        {
        for(int j=2*i; j<=N ;j+=i)
        {
            isPrime[j]=false;
        }
        }
    }
// optimised
  vector<bool> isPrime(N+1,true);
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i*i<=N;i++)
    {
        if(isPrime[i])
        {
        for(int j=i*i; j<=N ;j+=i)
        {
            isPrime[j]=false;
        }
        }
    }