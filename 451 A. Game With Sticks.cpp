#include <iostream>
	using namespace std;

	int main() {
		int n,m;
		cin>>n>>m;
		bool ma=0;
		if(min(n,m)&1){
			ma=1;
		}
		if(ma)
		{
	cout<<"Akshat";
		}
		else{
			cout<<"Malvika";

		}
		return 0;
	}
