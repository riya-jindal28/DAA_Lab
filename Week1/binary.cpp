#include<iostream>
using namespace std;
int binary(int ar[], int l, int r, int k, int c){
    if(r>=l){
    int mid=l+(r-l)/2;
    
    if(k==ar[mid]){
        return  c;
    }
    else if(k<ar[mid]){
        return binary(ar,l,mid-1,k,++c);
    }
    else{
        return binary(ar,mid+1,r,k,++c);
    }
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        int ar[n];
        int c=0;
    int l=0,r=n-1,res=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        res = binary(ar, l, r, k, c);
        res == -1 ? cout<<"Not Present" : cout<<"Present: "<<res+1;
    }
    return 0;
}    