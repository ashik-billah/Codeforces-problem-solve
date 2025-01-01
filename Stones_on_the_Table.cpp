#include <iostream>

using namespace std;

int main()
{
    int n;
    char arr[51];
    cin>>n>>arr;
    int t=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1])
            t++;
    }
    cout<<t;
}
