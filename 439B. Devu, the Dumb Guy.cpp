#include<algorithm>
#include <iostream>
using namespace std;

int main() {
	int n,x;
	cin>>n>>x;
	long long arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	
	}
	
	sort(arr,arr+n);
	long long sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=(arr[i]*x);
		if(x>1)
		  --x;
		
	}
	cout<<sum<<endl;
	
	
	return 0;
}
