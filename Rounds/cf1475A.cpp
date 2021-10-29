#include<bits/stdc++.h> 
 
using namespace std;
 
int main(){
    int cases;
    long long n;
    cin>>cases;
 
    for(int i = 0; i < cases; i++){
        cin>>n;
        int sum = false;
 
        if(n % 2 != 0){
            cout<<"YES"<<endl;
            sum = true;
        }
        else{
            while(n % 2 == 0){
                n = n / 2;
                if(n % 2 != 0 && n > 1){
                    cout<<"YES"<<endl;
                    sum = true;
                }
            }
        }
        if(sum == false){
            cout<<"NO"<<endl;
        }
    }
 
    return 0;
 
}