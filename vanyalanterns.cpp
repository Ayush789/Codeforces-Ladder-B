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
	int n;
  ll l;
  cin>>n>>l;
  vll a(n);
  for(int i=0;i<n;i++)cin>>a[i];
  sort(all(a));
  ll mx = 0;
  for(int i=0;i<n-1;i++)mx = max(mx,a[i+1]-a[i]);
  mx = max(mx,a[0]*2);
  mx = max(mx,(l-a[n-1])*2);
	cout.precision(20);
  cout<<fixed<<(float )mx/2.0;
	return 0;
}
