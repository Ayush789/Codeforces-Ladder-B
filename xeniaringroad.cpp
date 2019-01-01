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
  vll a(m+2);
  a[0]=1;
  for(ll i=0;i<m;i++)cin>>a[i+1];
  a[m+1]=a[m];
  ll cnt = 0;

  //for(int i=0;i<m+2;i++)cout<<a[i]<<" ";cout<<endl;

  for(int i=0;i<m+1;i++){
    //cout<<a[i]<<" "<<cnt<<endl;
    if(a[i]<=a[i+1])cnt += a[i+1]-a[i];
    else cnt += n-a[i]+a[i+1];
  }
  cout<<cnt<<endl;
	return 0;
}
