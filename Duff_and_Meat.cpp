#include <iostream>

using namespace std;

int main()
{
    int n;
    int amount,price;
    int minvalue=100;
    int sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>amount>>price;
    minvalue=min(minvalue,price);
    sum+=minvalue*amount;

    }
    cout<<sum<<endl;
}
