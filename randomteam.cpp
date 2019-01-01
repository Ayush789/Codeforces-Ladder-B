#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	ll n,m;
  cin>>n>>m;
  if(m==1)cout<<(n*(n-1))/2<<" "<<(n*(n-1))/2;
  else{
    ll x = n%m;
    ll y = n/m;
    //cout<<x<<" "<<y<<endl;
    cout<< ((x*( (y*(y+1))/2)) + (m-x)*((y*(y-1))/2))<<" "<<(((n-m)*(n-m+1))/2);
  }
	return 0;
}
