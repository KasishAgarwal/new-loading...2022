#include <iostream>
using namespace std;



void merge(int *arr,int s,int e){
int mid=(s+e)/2;
int len1=mid-s+1;
int len2=e-mid;
int *first=new int[len1];
int *second=new int[len2];
//copy values
int  mainIndexArray=s;
for(int i=0; i < len1;i++){
    first[i]=arr[mainIndexArray++];
}
 mainIndexArray=mid+1;
for(int i=0;i<len2;i++){
    second[i]=arr[mainIndexArray++];
}
//merge two sorted array
int index1=0;
int index2=0;
mainIndexArray = s;

while(index1<len1 && index2<len2){
if(first[index1]<second[index2]){
    arr[mainIndexArray++]=first[index1++];
}
else{
 arr[mainIndexArray++]=second[index2++];
}
}

while(index1<len1){
    arr[mainIndexArray++]=first[index1++];
}
while(index2<len2){
 arr[mainIndexArray++]=second[index2++];
}
//for saving your memory use you can 
//delete it's otherwise no problem
// delete []first;
// delete []second;

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void mergeSort(int *arr, int s, int e)
{//base case
    if (s >= e){
        return;}
    int mid = (s + e) / 2;
    // if (mid == 0)
    //     return;
    //sorting left part
    mergeSort(arr, s, mid);
    //sorting right there will be s=mid+1 
   // because of half portion has been taken in left part
    mergeSort(arr, mid + 1, e);
//merging  array by calling merge function
merge(arr,s,e);

}


/////////////////////////////////////////////////////////////////////////////


int main()
{
int n;cin>>n;
    int arr[n] ;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    //caling function merge sort
    mergeSort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }cout<<endl;
    return 0;
  
  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
  
/*{8,3,4,6,1,5,7,2} devide it in to two half part, then it will become
     {8,3,4,6}                            {1,5,7,2}
 {8,3},       {4,6}                   {1,5}       {7,2}
{8} {3}      {4}  {6}               {1} {5}      {7}  {2}
now sort 
  {3,8}      {4,6}                   {1,5}       {2,7}
  {3,4,6,8}                          {1,2,5,7}
*/




}
