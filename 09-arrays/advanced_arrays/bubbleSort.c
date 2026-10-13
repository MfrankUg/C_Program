// Buble Sort
#include <stdio.h>
#define size 9
 int main(){
int arr[]= {9,5,4,7,2,8,1,3,6};
 
    for(int i= 0; i < size; i++){
        for(int j = 0; j < (size-i-1); j++ ){
            if(arr[j]> arr[j + 1]  ){
               int temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp ;
            }
        }
    }  
     
    // print out

    for(int i =0; i < size; i++){

        printf(" %d", arr[i]);
    }


    return 0;
 }