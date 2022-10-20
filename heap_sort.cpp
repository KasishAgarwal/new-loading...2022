#include <iostream>
#include <cmath>

using namespace std;

void display(int a[], int n){
    for(int i=0;i<n; i++){
        cout<<a[i]<<" ";
    }
}

void insert(int a[], int n){
    int i,j, item;
    j = n;
    i = floor(n/2);
    item = a[n-1];
    while (i>=1 && a[i]<item){
        a[j]= a[i];
        j = i;
        i = floor(i/2);
    } 
    a[j]=item;
    cout<<"The array after heap sort: "<<endl;
    display(a,n);
}



int main(){
    int a[50];
    int n;

    cout<<"Enter the number of element: "<<endl;
    cin>>n;
    cout<<"\n Enter the elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"Array Before Heap Sort: "<<endl;
    display(a,n);

    insert(a,n);

    return 0;
}
