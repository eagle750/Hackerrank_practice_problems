#include <bits/stdc++.h>
#define ll long long int
using namespace std;

  int main()
  {
 int n,m;
 cin>>n;
 set<int>s;
 set<int>s1;
 map<int,int>aa;
 map<int,int>bb;
 int temp;int a[1000100];
 for(int i=0;i<n;i++)
  {
   cin>>a[i];
   s.insert(a[i]);
   aa[a[i]]++;
  }
cin>>m;
int temp2;
int k=0;int ans[100010];
for(int i=0;i<m;i++)
{
    cin>>temp2;
    bb[temp2]++;
    if(s.find(temp2)==s.end())
     s1.insert(temp2);
}
for(int i=0;i<n;i++)
{
    if(aa[a[i]]<bb[a[i]])
      s1.insert(a[i]);
}
 for(set<int>::iterator it=s1.begin();it!=s1.end();++it)
      cout<<*it<<" ";
    return 0;
}
