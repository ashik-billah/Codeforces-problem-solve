#include <iostream>
using namespace std;

int main() {
	int n,nmagnatics=1;
	cin>>n;
	string s1,s2;
	cin>>s1;
	for(int i=1;i<n;i++){
		cin>>s2;
		if(s1[1]==s2[0])
			nmagnatics++;
		s1=s2;

	}
	cout<<nmagnatics;
	return 0;
}
