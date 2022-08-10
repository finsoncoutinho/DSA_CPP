#include <iostream>

using namespace std;


void insertionSort(int arr[], int length){

//start at index 1
//pick the element and place it at the right position among its prev elements.
for(int i=1;i<length;i++){


//pick target
int target=arr[i];

//prev position
int prev= i-1;

//find the right position check if the index exists and check if the target is smaller then the prev element
//if yes then move the prev element at prev+1
//run till the prev element is smaller then the target element or till the 0th index
while(prev>=0 && arr[prev]>target){

arr[prev+1]=arr[prev];
prev=prev-1;

}

//after you found the that the prev element is smaller or the prev index doesn't exists then pace the target at prev+1
arr[prev+1]=target;

}

}


int main(){
    int arr[]={19,-9,5,78,2,-6,60,1,0,-40,-9,2,7};
    int length= sizeof(arr)/sizeof(arr[0]);

   insertionSort(arr,length);

    for(auto x : arr){
        cout<<x<<",";
    }

    return 0;
}
