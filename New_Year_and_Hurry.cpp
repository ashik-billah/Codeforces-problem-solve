#include <iostream>
using namespace std;

int main() {
	 int n,k;
	 cin>>n>>k;
	 int resttime=240-k;
	 int count=0;
	 for(int i=1;i<=n;i++){
		 if(resttime>=i*5){
			 resttime=resttime-i*5;
			++count;
		 }else{
			 break;
		 }

	 }
	 cout<<count;
	return 0;
}
