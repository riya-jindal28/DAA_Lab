#include<iostream>
using namespace std;

void check(int ar[],int n){

for(int i=n-1;i>0;i--){
    int j=0;
    int k=i-1;
    while(j<k){
        if(ar[i]==ar[j]+ar[k]){
            cout<<j<< k<< i;
            return;
        }
        else if(ar[i]>ar[j]+ar[k]){
            j+=1;
        }
        else{
            k-=1;
        }
    }
}
cout<<"No Sequence Found";
}
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
    check(ar,n);
}
}