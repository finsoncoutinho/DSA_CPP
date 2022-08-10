#include <iostream>
#include <vector>

using namespace std;


//this sorting is used when array has a range eg. Marks
void countingSort(int arr[], int length){

    int largest =-1;

    //find the largest
    for(int i=0;i<length;i++){
        largest=max(largest,arr[i]);
    }

    //create freq array of size largest+1 and initialized all values as 0
    vector<int> freq(largest+1,0);



    //find freq of each element in range
    for(int i=0;i<length;i++){
        freq[arr[i]]++;
    }

    //sort the array with the help of freq array
    int j=0;
    for(int i=0;i<=largest;i++){

        while(freq[i]>0){
        arr[j]=i;
        freq[i]--;
        j++;
        }
    }

}

int main(){
    int arr[]={19,5,78,2,60,1,0,2,7};
    int length= sizeof(arr)/sizeof(arr[0]);

    countingSort(arr,length);

      for(int i=0;i<length;i++){
        cout<<arr[i]<<",";
    }

    return 0;
}
