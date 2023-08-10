#include<iostream>
using namespace  std;

//print array function
void printArray(int arr[],int size){
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
}


//sorting operation

void sortOne(int arr[],int  n){
 int left=0,right=n-1;

  while(left<right){
   
    while (arr[left]==0 && left<right)
    {
        left++;
    }
    while (arr[right]==1 && left<right)
    {
        right--;
    }

  //and condition onther
  swap(arr[left],arr[right]);
  left++;
  right++; 
    

  };

}

int main(){
    int arr[8]={1,0,0,1,1,0,0,1};
    sortOne(arr,8);
    printArray(arr,8);
}