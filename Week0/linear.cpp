#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    cin>>n;
    int ar[n];
    int k;
    cin>>k;
    int c=0;
    bool st = false;
    while(t--){
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        for(int i=0;i<n;i++){
           if(ar[i]==k){
               st = true;
               cout<<"Yes,"<<" No of comp: "<<c; 
               break;
           }
           else{
           c++;
           }   
        }
        if(!st)
        cout<<"No"<<" No of comp: "<<c;    
    }
    return 0;
}