#include <stdio.h>
#include <stdbool.h>
 
#define MAX 5
 
int arr[MAX] = {2, 4, 1, 2, 8};
 
// ham de trao doi gia tri
void swap(int num1, int num2){
    int temp = arr[num1];
    arr[num1] = arr[num2];
    arr[num2] = temp;
}
 
int partition(int left, int right, int pivot){
    int leftPointer = left -1;
    int rightPointer = right;
 
    while(true){
 
        while(arr[++leftPointer] < pivot){
        }
 
        while(rightPointer > 0 && arr[--rightPointer] > pivot){
        }
 
        if(leftPointer >= rightPointer){
            break;
        }else{
            printf(" Phan tu duoc trao doi :%d,%d\n", 
            arr[leftPointer],arr[rightPointer]);
            swap(leftPointer,rightPointer);
        }
 
    }
 
    printf(" Phan tu chot duoc trao doi :%d, %d\n", arr[leftPointer],arr[right]);
    swap(leftPointer,right);
    printf("Mang sau moi lan trao doi: "); 
    display();
    return leftPointer;
}
 
void quickSort(int left, int right) {
    if(right-left <= 0){
        return;
    } else {
        int pivot = arr[right];
        int partitionPoint = partition(left, right, pivot);
        quickSort(left, partitionPoint-1);
        quickSort(partitionPoint+1, right);
    }
}
 

 
main() {
    printf("Mang ban dau: ");
     printf("[");
     for(int i = 0; i < MAX; i++){
          printf("%d ", arr[i]);
     }
     printf("\n");

    quickSort(0, MAX-1);
    printf("\n");
    printf("Mang sau khi da sap xep: ");
  
   printf("[");
   for(int i = 0; i < MAX; i++){
        printf("%d ", arr[i]);
   }
 
    printf("]\n");
}
