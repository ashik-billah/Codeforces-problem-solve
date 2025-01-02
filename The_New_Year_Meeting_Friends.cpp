#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
	int arr[3];
	int minm,maxi;
	for(int i=0;i<3;i++){
		cin>>arr[i];
	}
	maxi=arr[0];
	minm=arr[0];
for(int i=1;i<3;i++){
	maxi=max(maxi,arr[i]);
	minm=min(minm,arr[i]);
}
	cout<<maxi-minm;

	return 0;
}
