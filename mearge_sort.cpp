#include<iostream>
using namespace std;

void mearge(int arr[],int start,int end){
    int mid=start+(end-start)/2;
    int len1=mid-start+1;
    int len2=end-mid;

    int *first=new int[len1];
    int *second=new int[len2];
    int k=start;
    for(int i=0;i<len1;i++){
        first[i]=arr[k++];
    }
    for(int i=0;i<len2;i++){
        second[i]=arr[k++];
    }

    int index1=0;
    int index2=0;
    int arrmainindex=start;
    while(index1<len1 && index2<len2){
        if(first[index1]>second[index2]){
            arr[arrmainindex++]=second[index2++];
        }
         else{
            arr[arrmainindex++]=first[index1++];
        }
    }

    while(index1<len1){
    arr[arrmainindex++]=first[index1++];
    }

     while(index2<len2){
    arr[arrmainindex++]=second[index2++];
    }
}

void mearge_sort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int mid=start+(end-start)/2;
    mearge_sort(arr,start,mid);
    mearge_sort(arr,mid+1,end);
    mearge(arr,start,end);
}
int main(){

    int arr[]={3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int size=sizeof(arr)/sizeof(arr[0]);
    mearge_sort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}