#include<stdio.h>
#include<iostream>

using namespace std;


int linearSearch(int n, int arr[], int data){
 int flag = 0;

for(int i =0; i<n; i++){
    
    if(arr[i]== data){
        cout << "Element found \n";
        flag = 1;
        break;
    }
   

}

if(flag == 0){
    cout << " Element not found";
   }
}

int binarySearch(int n, int arr[], int data){

int low = 0; 
int high = n-1;
int mid = (low + high)/2;

if(data == arr[mid]){
    return mid;
}
 else if(data > arr[mid]){
    low = mid + 1;
 }
  else {
    high = mid - 1;
  }

  return -1;




}

int bubbleSort(int n, int arr[]){

 for(int i=0; i<n-1; i++){
    for(int j=0; j<(n-1)-i; j++){
        if(arr[j+1]<arr[j]){
            swap(arr[j+1], arr[j]);
        }
    }
 }


for(int i = 0; i<n; i++){
    cout <<" " << arr[i];
}


}

int insersionSort(int n, int arr[]){
    
    for(int i =1; i<n; i++){
      int temp = arr[i];
      
      int j = i-1;
       while(j>0){
        if(arr[j]> temp){
        arr[j+1] = arr[j];
        j--;
       }

      }
      
    }
}

int selectionSort(int n, int arr[]){

for(int i=0; i<n-1; i++){
    int min = i;
    for(int j=0; j<n; j++){
        min = j;

    }

 if(min != i){
    swap(arr[i], arr[min]);
 }

}


}

int main(){
int n;
cin >> n;

int arr[n];
for(int i=0; i<n; i++){
    cin >> arr[i];
}

selectionSort(n,arr);
for(int i=0; i<n; i++){
    cout << " "<< arr[i];
}
// bubbleSort(n,arr);
}