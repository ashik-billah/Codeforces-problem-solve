#include <iostream>
#include<algorithm>
using namespace std;

int main() {
int a,b;
cin>>a>>b;
int mini=min(a,b);
int maxi=max(a,b);
cout<<mini<<" "<<(maxi-mini)/2<<endl;
	return 0;
}
