#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int t;
    string s;
    cin>>t;
    while(t--)
        {
        cin>>s;
        int n=s.length()-1;
        int n1=n-1;
        int i=1;
        int flag=0;
        while(i<n)
            {
         if(abs(s[i]-s[i-1])!=abs(s[n1]-s[n1+1])) 
             {
             flag=1;
             break;
         }
            i++;
            n1--;
        }
        if(flag)
            cout<<"Not Funny"<<endl;
        else
            cout<<"Funny"<<endl;
    }
    return 0;
}
