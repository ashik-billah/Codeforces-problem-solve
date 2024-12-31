#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string first,second;
	cin>>first>>second;
	for(int i=0;i<first.length();i++)
	{
	first[i]=tolower(first[i]);
	second[i]=tolower(second[i]);
	}
	int x=first.length();
	int n=second.compare(0,x,first,0,x);
	if(n==0){
		cout<<"0";
	}
	else if(n<0){
		cout<<"1";
	}
	else
		cout<<"-1";

	return 0;
}
