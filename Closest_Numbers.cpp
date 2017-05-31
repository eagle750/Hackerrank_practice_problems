#include <bits/stdc++.h>

using namespace std;

int main()
{
int n,a[200003],b[200003];

cin>>n;
for(int i=0;i<n;i++)
    cin>>a[i];
sort(a,a+n);
map<int,int>m;
int c=0,min=INT_MAX;
for(int i=0;i<n-1;i++)
{
    c=a[i+1]-a[i];
    if(c<min)
        min=c;
}
for(int i=0;i<n-1;i++)
{
    if(a[i+1]-a[i]==min)
        m[a[i]]=a[i+1];
}
int j=0;
for (map<int,int>::iterator it=m.begin(); it!=m.end(); ++it)
   {
       b[j++]=it->first;
       b[j++]=it->second;
   }
   sort(b,b+j);
   for(int i=0;i<j;i++)
    cout<<b[i]<<" ";
    return 0;
}