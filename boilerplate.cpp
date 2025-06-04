/*Abhinav Dogra*/
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define int long long
typedef unsigned long long ull ;
#define ll long long
#define all(v) v.begin(),v.end()
const int  M = 1e9+7;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int>pr;
typedef vector<pr> vp;
template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// pbds = find_by_value(), order_of_key()
// find_by_order(k)  returns iterator to kth element starting from 0;
// order_of_key(k) returns count of elements strictly smaller than k;
#ifndef ONLINE_JUDGE
#define  debug(x) cout <<  #x <<  " ";_print(x); cout << "\n";
#else 
#define debug(x)
#endif
void _print(int t) {cout << t;}void _print(string t) {cout << t;}void _print(char t) {cout << t;} void _print( long  double t) {cout << t;}void _print(double t) {cout << t;}void _print(ull t) {cout << t;}template <class T, class V> void _print(pair <T, V> p);template <class T> void _print(vector <T> v);template <class T> void _print(set <T> v);template <class T, class V> void _print(map <T, V> v);template <class T> void _print(multiset <T> v);template <class T, class V> void _print(pair <T, V> p) {cout << "{"; _print(p.ff); cout << ","; _print(p.ss); cout << "}";}template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}template <class T> void _print(set <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}template <class T> void _print(multiset <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}template <class T, class V> void _print(map <T, V> v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]";} void _print(auto x) { cout << x ;}void _print(map<int, int> m) { cout << "["; for (auto &p : m) { cout << p.first << " -> " << p.second << "\n"; } cout << "]"; }void _print(map<int, vector<int>> m) { cout << "["; for (auto &p : m) { cout << "(" << p.first << " -> "; _print(p.second); cout << ")\n"; } cout << "]"; }
void solve()
{ 
   
}


signed main(){
#ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
#endif
      auto begin = std::chrono::high_resolution_clock::now();
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
       int tt;
       cin >> tt;
       while(tt--)
       solve();
       auto end = std::chrono::high_resolution_clock::now();
       auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    //    cout  << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}