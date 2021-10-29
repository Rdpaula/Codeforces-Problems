#include<bits/stdc++.h> 
 
using namespace std;
 
int main(){
 
    int cases,a,b,c,d;
    cin>>cases;
 
    for(int i = 0; i < cases; i++){
        cin>>a>>b>>c>>d;
 
        int ans = max(a+b, c+ d);
 
        cout<<ans<<endl;
    }
    return 0;
}