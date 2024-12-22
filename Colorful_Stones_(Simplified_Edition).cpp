#include <iostream>
#include<string>
using namespace std;

int main() {
	string s1,s2;
	cin>>s1>>s2;
	int pos=0;
	int len=s2.length();
	int i;
	for( i=0;i<len;i++)
	{
	if(s2[i]==s1[pos])
		pos++;
	}
    cout<<++pos;
	return 0;
}
