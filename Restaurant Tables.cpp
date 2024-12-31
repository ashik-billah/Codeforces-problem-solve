#include <iostream>
using namespace std;

int main() {

	int n,a,b;
	cin>>n>>a>>b;
	int bow=0;
	int people=0;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(x==1){
			if(a>0){
				a-=1;
			}
			else{

				if(b>0){
					b-=1;
					bow+=1;
				}
				else if(bow>0){
						 bow-=1;

								}
				else {
					people +=1;
				}
			}

		}
		else if(x==2){
			if(b>0){
				b-=1;
			}
			else {
				people+=2;
			}
		}

	}
	cout<<people;





	return 0;
}
