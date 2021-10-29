#include<bits/stdc++.h> 
 
using namespace std;
 
int main(){
    int cases,n;
    string r,b;
    cin>>cases;
    for(int i = 0; i < cases; i++){
        cin>>n;
        cin>>r;
        cin>>b;
        int ar_r[n];
        int ar_b[n];
        int pr = 0;
        int pb = 0;
        for(int j = 0; j < n; j++){
            ar_r[j] = r[j];
            ar_b[j] = b[j];
        }
 
        for(int j = 0; j < n; j++){
            if(ar_r[j] > ar_b[j]){
                pr += 1;
            }
            else if(ar_r[j] < ar_b[j]){
                pb += 1;
            }
        }
 
        if(pr > pb){
            cout<<"RED"<<endl;
        }
        else if(pb > pr){
            cout<<"BLUE"<<endl;
        }
        else if(pb == pr){
            cout<<"EQUAL"<<endl;
        }
    }
 
    return 0;
 
}
