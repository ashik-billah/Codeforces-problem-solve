#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	 string x,result="";
	 cin>>x;
	 int y=x.length();
	 for(int i=0;i<y;i++){
		 x[i]=tolower(x[i]);
	 }
	 for(int i=0;i<y;i++){
		 if(x[i]!='a'&&x[i]!= 'o'&&x[i]!= 'y'&&x[i]!='e'&& x[i]!='u' && x[i]!= 'i'){
			 result+=".";
			 result+=x[i];
		 }
	 }
	 cout<<result;
	return 0;
}
