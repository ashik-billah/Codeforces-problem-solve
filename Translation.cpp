#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	 string s1,s2;
	 cin>>s1>>s2;
	 reverse(s2.begin(),s2.end());
	 if(s1==s2){
		 cout<<"YES";
	 }
	 else
		 cout<<"NO";





	return 0;
}
