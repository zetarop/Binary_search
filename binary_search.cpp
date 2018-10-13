/*
  Given a sorted array of length n.
  Check whether number k is present in array or not.
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
		int m=(l+h)/2;
		if(k > v[m])
			l = m+1;
		else if(k < v[m])
			h=m-1;
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
	cout<<binary_search(v, n, k)<<endl;
	return 0;
}
