#include <iostream>
#include<string>
using namespace std;

int main() {
	 int n;
	 cin>>n;
	 int x=0;
	 while(n--){
		string s;
		cin>>s;
		if(s.find('+')!=-1){
			x+=1;
		}
		else{
			x-=1;
		}

		cin.ignore();
	 }
	 cout<<x;
	return 0;
}
