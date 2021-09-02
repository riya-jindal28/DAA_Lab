#include<iostream>
using namespace std;
int swap(int *a, int *b){
    int temp= *a;
    *a=*b;
    *b=temp;
}
void selection(int ar[], int n){
    int min;
    for(int i=0;i<n;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(ar[min]>ar[j]){
                swap(&ar[min], &ar[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
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
       selection(ar,n);
    }
}