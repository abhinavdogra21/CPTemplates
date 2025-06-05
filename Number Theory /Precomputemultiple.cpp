vector<int> mul[4];
void solve()
{ 
    for(int i=1;i<100;i++)
    {
        for(int j=i;j<100;j+=i)
        {
            mul[i].push_back(j);
        }
    }
    int n=mul[3].size();
    for(int i=0;i<n;i++)
    {
        cout << mul[3][i] << " ";
    }
   
    
   
}
