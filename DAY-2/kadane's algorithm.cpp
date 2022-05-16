#include <bits/stdc++.h> 
#define ll long long
long long maxSubarraySum(int arr[], int n)
{
	ll s=0;
	ll mx=0;
	for(int i=0;i<n;i++)
	{
		if(s+arr[i]<0)
			s=0;
		else{
			s+=arr[i];
			mx=max(s,mx);
		}
	}
	return mx;
	
	
}
