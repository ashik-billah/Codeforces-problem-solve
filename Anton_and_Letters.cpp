#include <iostream>
#include<string>
#include<set>
using namespace std;

int main() {
	 string s;
	 getline(cin,s);
	  set<char> letters;
	 int len=s.length();
	 for(int i=0;i<len;i++){
		 if(s[i]==','||s[i]=='{'||s[i]=='}'||s[i]==' ');
		 else{
			 letters.insert(s[i]);
		 }
	 }
	 cout<<letters.size();
	return 0;
}
