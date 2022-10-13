#include<iostream>
using namespace std;
 void sayDigit(int n,string array[]){
//base case
if(n==0)return;
//procesing
int digit=n%10;
n=n/10;
//recirsive call
sayDigit(n,array);
cout<<array[digit]<<" ";

}

int main(){
string array[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int n;cin>>n;
cout<<endl;
sayDigit(n,array);
cout<<endl;



}
