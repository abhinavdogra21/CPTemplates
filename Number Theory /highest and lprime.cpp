void solve()
{ 
    int n=100;
    vector<bool>isPrime(n+1,true);
    isPrime[1]=isPrime[0]=false;
    vi  hp(n+1,0),lp(n+1,0);
    for(int i=2;i<n;i++)
    {
        if(isPrime[i])
        {
            lp[i]=hp[i]=i; // prime ka number
            // no. itself hightest
            for(int j=2*i;j<n;j+=i)
            {
                isPrime[j]=false;
                hp[j]=i;
                if(lp[j]==0) lp[j]=i;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout << lp[i]  << " "<< i << " " << hp[i] << "\n";
    }
   
}

//  optmised
int hp[N];
hp[0]=hp[1] = 1; 
void solve()
{
   for(int i=2;i<=N;i++)
   {
     if(hp[i]==0)
     { // purane wali mai true
       // lete the isliye yaah 0 sai intiialize
       // to ulta condition lagaya
       hp[i]=i; 
     
        for(int j=2*i;j<=N;j+=i)
        {
          hp[j]=i;
        }
     }
   }
}
