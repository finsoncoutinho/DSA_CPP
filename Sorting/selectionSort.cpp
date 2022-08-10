#include <iostream>

using namespace std;

//find the min element from the unsorted part of array and place it in the begining.
void selectionSort(int arr[], int length){

    //run only for n-2 
    for(int i=0; i<=length-2;i++){

        
        int minPos = i;

        //find the min element
        for(int j=i;j<length;j++){
            if(arr[j]<arr[minPos]){
                minPos=j;
            }
        }


        //swap the min element with the element in the begining
        swap(arr[i],arr[minPos]);
     
    }
}

int main(){
    int arr[]={19,-9,5,78,2,-6,60,1,0,-40,-9,2,7};
    int length= sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr,length);

    for(auto x : arr){
        cout<<x<<",";
    }

    return 0;
}
