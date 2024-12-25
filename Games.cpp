#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	 int n;
	 cin>>n;
	 int gamescount=0;
	 int arr1[n];
	 int arr2[n];
	 for(int i=0;i<n;i++){
		 cin>>arr1[i];
		 cin>>arr2[i];
	 }
	 for(int i=0;i<n;i++){
		gamescount+= count(arr2,arr2+n,arr1[i]);
	 }
	 cout<<gamescount;










	return 0;
}
