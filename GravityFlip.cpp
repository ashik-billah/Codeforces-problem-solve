#include <iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
int n;
cin>>n;
int arr[101];

for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    sort(arr,arr+n);

    for(int j=0;j<n;j++){
    cout<<arr[j]<<" ";
    }

    return 0;
}
