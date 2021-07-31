#include<iostream>
using namespace std;
int binary(int ar[], int l, int r, int k){
    int mid;
    if(r>=l){
        mid=l+(r-l)/2;
    if(ar[mid]==k)
        return mid;
    if(ar[mid]<k)
        return binary(ar,l,mid-1,k);
    else
    return binary(ar,mid+1,r,k);  
    }
    return -1; 
}
int expo(int ar[], int n, int k){
    if(ar[0]==k){
        return 0;
    }
    int i=1;
    while(i<n && ar[i]<=k){
    i*=2;
    }
    binary(ar,i/2,min(i,n-1),k);
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
        int k,res=0;
        cin>>k;
        res=expo(ar,n,k);
        res==-1 ? cout<<"Not present" : cout<<"Present";
    }
    
}