#include<iostream>
using namespace std;

// int partition1(int arr[],int start,int end){
//     int pivot=arr[start];
//     int cnt=0;
//     for(int i=start+1;i<=end;i++){
//         if(pivot>=arr[i]){
//             cnt++;
//         }
//     }

//     int pivotindex=start+cnt;
//     swap(arr[pivotindex],arr[start]);
//     int i=start;
//     int j=end;
//     while(pivotindex>i && pivotindex<j){
//         while(pivot>arr[i]){
//             i++;
//         }

//         while(pivot<arr[j]){
//             j--;
//         }

//         if(pivotindex>i && pivotindex<j){
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//     }

//     return pivotindex;
    

// }

// void quick_sort(int arr[],int start,int end){
//     if(start>=end){
//         return;
//     }
//     int partition=partition1(arr,start,end);

//     quick_sort(arr,start,partition-1);
//     quick_sort(arr,partition+1,end);
// }

int partition1(int arr[],int start,int end){
    int pivot=arr[start];
    int cnt=0;
    for(int i=start+1;i<=end;i++){
        if(pivot>=arr[i]){
            cnt++;
        }
    }

    int pivotindex=cnt+start;
    swap(arr[pivotindex],arr[start]);
    int i=start;
    int j=end;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<pivot){
            i++;

        }
        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotindex && j>pivotindex){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }

    return pivotindex;
}
void quick_sort(int  arr[],int start,int end){
    if(start>=end){
        return ;

    }
    int partition=partition1(arr,start,end);
    quick_sort(arr,start,partition-1);
    quick_sort(arr,partition+1,end);
}
int main(){

    int number[]={4,2,6,9,18,9,1,0,11,13};
    int size=sizeof(number)/sizeof(number[0]);
    quick_sort(number,0,size-1);
    for(int i=0;i<size;i++){
        cout<<number[i]<<" ";
    }
    return 0;
}