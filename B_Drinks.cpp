#include <iostream>
#include<iomanip>
using namespace std;

int main() {
 int n;
 cin>>n;
 double result=0;
 double final_result=0;
 int x;
 for(int i=0;i<n;i++){
	 cin>>x;
	 result+=(double)x/100;
 }
 final_result=(double)(result/n)*100;
 cout<<setprecision(10)<<final_result;
	return 0;
}
