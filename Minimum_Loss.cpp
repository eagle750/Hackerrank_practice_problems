#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main() {
ll n,a[200004];
    cin>>n;
    vector<pair<ll,ll> >v;
    ll temp;
    for(ll i=0;i<n;i++)
      {  cin>>temp;
       v.push_back(make_pair(temp,i));
      }
    sort(v.begin(),v.end());
    ll c=0,min=INT_MAX;
    for(int i=1;i<n;i++)
        {
        if(v[i].second<v[i-1].second&&v[i].first!=v[i-1].first&&v[i].first-v[i-1].first<min)
            min=v[i].first-v[i-1].first;
    }
    cout<<min<<endl;
    return 0;
}