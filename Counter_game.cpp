#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int setBits(unsigned long long int n) {
	int count = 0 ;
    while(n) {
    	n &= (n-1) ;
        count ++ ;
    }
    return count ;
}

int main() {
    int t ;
    scanf("%d\n",&t) ;
    while(t--) {
        unsigned long long int n ;
           cin>>n;
        if (setBits(n-1) & 1) printf("Louise\n") ;
        else printf("Richard\n") ;
    }
    return 0;
}
