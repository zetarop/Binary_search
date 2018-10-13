/*
  Given sorted array of n unique integer.
  Count number of pair product equals k.
  arrray : 1,2,4,6,8
  k      : 16
  ans    : 3
  pairs  : (2,8), (4,4), (8,2)
  
*/

#include<bits/stdc++.h>
#define ve vector
#define pb push_back
#define ll long long

bool binary_search(ve<int> v, int n, int k)
{
	int l=0;
	int h=n-1;
	while(l <= h)
	{
		int m = (l+h)/2;
		if(k > v[m])
			l = m+1;
		else if(k < v[m])
			h = m-1;
		else
			return 1;
	}
	return 0;
}

int main()
{
	int n;
	cin>>n;
	ve<int> v(n);
	for(auto &a:v) cin>>a;
	int k;
	cin>>k;
	int ans=0;
	for(auto a:v)
		if(k%a == 0 && binary_search(v,n,k/a) )
			ans++;
	cout<<ans<<endl;
	return 0;
} 
