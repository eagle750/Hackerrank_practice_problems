#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
ll n,k;
cin>>n>>k;
ll a[100002];
for(ll i=0;i<n;i++)
    cin>>a[i];
sort(a,a+n);
ll c=0;
ll i=0;ll j=1;
while(j<n)
{
    if(a[j]-a[i]==k)
    {
        c++;
        j++;
        i++;
    }
    else
        if(a[j]-a[i]>k)
        i++;
    else
        j++;
}
cout<<c<<endl;
    return 0;
}
