#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n , h ; cin >> n >> h ;
    int cnt = 0 ;
    for(int i = 0 ; i < n ;i ++){
        int x ; cin >> x ;
        cnt ++ ;
        if(x >h) cnt ++ ;
    }

    cout << cnt << endl ;

    return 0 ;
}
