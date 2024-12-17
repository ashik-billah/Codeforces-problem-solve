#include <iostream>

using namespace std;

int main()
{
    int numOFCases;
    int thereferencevalue;
    int counter=0;
    int arr[51];
    cin>>numOFCases;
    cin>>thereferencevalue;
    for(int i=0;i<numOFCases;i++){
        cin>>arr[i]; }
    for(int i=0;i<numOFCases;i++)
        if((arr[i]>=arr[thereferencevalue-1])&&arr[i]!=0){
            counter+=1;
     }}
cout<<counter;
}
