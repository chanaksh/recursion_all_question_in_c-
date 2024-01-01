#include <iostream>
using namespace std;

int min_ele(int arr[],int size,int start){
     int min=start;
     for(int i=start+1;i<size;i++){
        if(arr[min]>arr[i]){
            min=i;
        }
     }
     return min;
}
void selection_sort(int arr[],int size,int start){
   if(start==size){
    return;
   }

   int min_index=min_ele(arr,size,start);
   int temp=arr[min_index];
   arr[min_index]=arr[start];
   arr[start]=temp;
   selection_sort(arr,size,start+1);
}
int main()
{
    
  
    int arr[11] = {2, 4, 12, 34, 67, 22, 45, 66, 33, 46, 89};
    int size = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr,size,0);

    for(int i=0;i<size;i++){
   cout<<arr[i]<<" ";
    }
    return 0;
}