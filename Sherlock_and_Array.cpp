#include <bits/stdc++.h>

using namespace std;

int main()
{
int t,n;
cin>>t;
while(t--)
{
    cin>>n;
    int a[100003];
    int sum1[100003],sum2[100003];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      if(i==0)
        sum1[i]=a[i];
      else
      sum1[i]=sum1[i-1]+a[i];
    }
    int j=0;
    for(int i=n-1;i>=0;i--)
       {
           if(i==n-1)
            sum2[i]=a[i];
           else
           sum2[i]=sum2[i+1]+a[i];
       }
       int flag=0;
    for(int i=0;i<n;i++)
    {
        if(sum1[i]-a[i]==sum2[i]-a[i])
        {
           // cout<<sum1<<" "<<sum2;
            cout<<"YES"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<"NO"<<endl;
}
    return 0;
}
