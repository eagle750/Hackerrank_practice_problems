#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
ll t,n;
cin>>t;
while(t--)
{
    cin>>n;
    int a[100]; int i=0;
    while(n!=0)
    {
      a[i++]=n%2;
      n=n/2;
    }
    for(int j=i;j<32;j++)
      a[j]=0;
      for(int j=31;j>=0;j--)
      {
          if(a[j]==0)
            a[j]=1;
          else
            a[j]=0;
      }
      ll sum=0;
      int x=0;
      for(int j=0;j<32;j++)
      {
          ll y=pow(2,x);
          sum+=(a[j]*y);
          x++;
      }
      cout<<sum<<endl;
}
    return 0;
}
