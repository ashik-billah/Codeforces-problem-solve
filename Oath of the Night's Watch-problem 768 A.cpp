#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
	int counter=0;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);

	 counter=(lower_bound(arr,arr+n,arr[n-1])-arr)-(upper_bound(arr,arr+n,arr[0])-arr);
	 if(counter>0)
	cout<<counter;
	 else{
		 cout<<0;
	 }

	return 0;
}
