#include <iostream>
#include<string>
using namespace std;
int main() {
	string s,s2="abcdefghijklmnopqrstuvwxyz";
	int n,k;
	cin>>n>>k;
	for(int i=0;i<k;i++){
		s+=s2[i];
	}
	s2.erase(0,k);
	int i=s.length();
	for(int j=0;i<n;i++,j++){
		s+=s[j];
		if(j==k){
			j=0;
		}
	}
	cout<<s;

	return 0;
}
