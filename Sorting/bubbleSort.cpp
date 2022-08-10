#include <iostream>

using namespace std;

//Take the largest element and place it in the end
// repeat this for n-1 times
void bubbleSort(int arr[], int length){

    for(int i=1; i<length;i++){

        //we start with i=1 because we want to start checking if condition from n-2 
        //ie. we want to skip the last element of the array 
        //because its automatically sorted
        for(int j=0; j<length-i;j++){

            //we check for every element in the array 
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

}

int main(){
    int arr[]={19,-9,5,78,2,-6,60,1,0,-40,-9,2,7};
    int length= sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,length);

    for(auto x : arr){
        cout<<x<<",";
    }

    return 0;
}
