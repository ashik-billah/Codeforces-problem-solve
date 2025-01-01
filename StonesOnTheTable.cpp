#include <iostream>
#include<string>
using namespace std;

int main() {
       int l;
       cin>>l;
	string s;
	cin>>s;
	int counter=0;
	int n=s.length();
	for(int i=0;i<n;i++){
		if(s[i]==s[i+1])
			counter ++;

	}
	cout<<counter;



	return 0;
}
