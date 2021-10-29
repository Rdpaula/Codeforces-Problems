#include<bits/stdc++.h> 
 
using namespace std;
 
int main(){
    int cases;
    long long n;
    cin>>cases;
 
    for(int i = 0; i < cases; i++){
        cin>>n;
        int res = n/2020;
        if(res >= n % 2020){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}