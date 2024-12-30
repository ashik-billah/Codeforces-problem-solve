#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int val,reference;
	cin>>val>>reference;
	int  sum;
	sum=val;
	int rem=0;
	while(val/reference>0){
        rem=val%reference;
		val=val/reference;
		sum+=ceil(val);
         val+=rem;

	}
	cout<<sum;
	return 0;
}
