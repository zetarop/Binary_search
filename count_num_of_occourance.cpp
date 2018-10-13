/*
  Given a sorted array of length n.
  Check number occourance of k in array.
*/

#include<bits/stdc++.h>
#define ve vector
#define pb push_back
#define ll long long

int cnt=0;

int binary_search(ve<int> v, int n, int k)
{
	int l=0;
	int h=n-1;
	while(l <= h)
	{
		int m=(l+h)/2;
		if(k > v[m])
			l = m+1;
		else if(k < v[m])
			h = m-1;
		else
			return m;
	}
	return -1;
}

int count_occourance(ve<int> v, int n, int k)
{
	int t = binary_search(v,n,k);
	if(t == -1)
		return 0;
	int cnt=0;
	for(int i=t;i<n;i++)
		if(v[i] == k)
			cnt++;
		else
			break;
	for(int i=t-1;i>=0;i--)
		if(v[i] == k)
			cnt++;
		else
			break;
	return cnt;
}

int main()
{
	int n;
	cin>>n;
	ve<int> v(n);
	for(auto &a:v) cin>>a;

	int k;
	cin>>k;
	cout<<count_occourance(v,n,k)<<endl;
	return 0;
}
