#include <iostream>
using namespace std;

int main() {
	 int a,b;
	 cin>>a>>b;
	 int count =0;
	 while(a<b || a==b){
		 ++count;
		 a=3*a;
		 b=b*2;
	 }
	 cout<<count;
	return 0;
}
