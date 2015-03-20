/* 
   SPOJ Problem Set (Classical)
   10509. Cards
   Problem Code: CRDS
*/

#include <bits/stdc++.h>

using namespace std;

long long int sum,n;

int t,mod=1000007;

int main() {

	// your code here

	scanf("%d",&t);

	while(t--){

	sum=0;
	
 	scanf("%lld",&n);
	
	sum=(n*(n+1))%mod; 
	
	n=n-1;
	
	sum+=((n*(n+1))/2);

	printf("%lld\n",sum%mod);

}

	return 0;
}
