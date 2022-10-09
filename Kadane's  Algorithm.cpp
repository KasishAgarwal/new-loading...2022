/*
Algorithm
Begin
Function kadanes(int array[], int length):
   Initialize
   highestMax = 0
   currentElementMax = 0
   for i = 0 to length-1
      currentElementMax = max(array[i],currentElementMax + array[i])
      highestMax = max(highestMax, currentElementMax)
   return highestMax
End
*/

#include<iostream>
using namespace std;
int kadanes(int array[],int length) {
   int highestMax = 0;
   int currentElementMax = 0;
   for(int i = 0; i < length; i++){
      currentElementMax =max(array[i],currentElementMax + array[i]) ;
      highestMax = max(highestMax,currentElementMax);
   }
   return highestMax;
}
int main() {
   cout << "Enter the array length: ";
   int l;
   cin >> l;
   int arr[l];
   cout << "Enter the elements of array: ";
   for (int i = 0; i < l; i++) {
      cin >> arr[i];
   }
   cout << "The Maximum Sum is: "<<kadanes(arr,l) << endl;
   return 0;
}
