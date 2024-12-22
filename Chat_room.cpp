#include <iostream>
#include <string>
using namespace std;
bool valid(string s){
	string s2="hello";
	for(int i=0;i<5;i++){
		char traget=s2[i];
 	int val=s.find(traget);
		 if(val!=-1){
			s.erase(0,val+1);
		 }
	  else{
			 return false;
		 }
	}
	return true;


}
int main() {
	string s ;
	cin>>s;
if(valid(s)){
	cout<<"YES";
}
else{
	cout<<"NO";
}
return 0;
}
