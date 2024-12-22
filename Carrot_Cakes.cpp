#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	 int n,k,t,d;
	 cin>>n>>t>>k>>d;
	 int groups=(n+k-1)/k;
	 int oven1=0,oven2=d;
	 for(int i=0;i<groups;i++){
		 if(oven1<=oven2)oven1+=t;
		 else
			 oven2+=t;
	 }
	 if(max(oven1,oven2)<groups*t)
		 cout<<"YES";
	 else
		 cout<<"NO";
	return 0;
}
