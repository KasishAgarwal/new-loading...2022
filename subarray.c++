//maximum subarray sum prefix approach
#include <iostream>
#include<climits>
using namespace std;
int main() {
    // Write C++ code here
    int arr[6]={1,-2,6,-1,3,0},parr[6],n=1,sum=0,max=INT_MIN;
    for(int i=0;i<6;i++){
        for(int j=0;j<n;j++){
            sum=sum+arr[j];
        }
        n++;
        parr[i]=sum;
        sum=0;
    }
    for(int i=0;i<6;i++){
        for(int j=i;j<6;j++){
            if(i==0){
                sum=parr[j];
                if(sum>max){
                    max=sum;
                }
            }
            else{
                sum=parr[j]-parr[i-1];
                if(sum>max){
                    max=sum;
                }
            }
        }
    }
    cout<<max<<endl;
    return 0;
}
//maximum subarray sum kadane algorithm
#include<bits/stdc++.h>
using namespace std;
int main(){
    int curr=0,maxsum=INT_MIN,k=0,n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
            for(int i=0;i<n;i++){
            if(arr[i]<0){
                if(maxsum<arr[i])
                maxsum=arr[i];
                k++;
            }
        }
        
       if(k!=n){
            for(int i=0;i<n;i++){
            curr=curr+arr[i];
            if(maxsum<curr)
            maxsum=curr;
            if(curr<0)
            curr=0;
        }
       }
       cout<<maxsum;
}