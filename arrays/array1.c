// array insertion deletion and search in an unsorted array
#include<stdio.h>

void insert(int arr[10] , int element , int index , int size){
    for(int i = size ; i< index -1 ; i--){
         arr[i+1] = arr[i];         
    }
    arr[index] = element;
}

int delete(int arr[10] , int index , int size ){
   for(int i = 0 ; i< index ; i++){
    arr[i] = arr[i+1];
   }
  return arr[index];
}
void display(int arr[10] , int size){
    for(int i = 0 ; i< size  ; i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[6] = {12 , 2 , 34, 5, 67, 78};
    int s = 6;

    insert(arr , 24 , 3 , s);
    s++;
    display(arr , s);
    printf("%d",delete(arr ,3,s)); 
    s--;
    // search();

}