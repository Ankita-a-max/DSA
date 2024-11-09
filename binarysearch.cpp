#include<iostream>
using namespace std;

Binarysearch(int a[],int x,int low,int high){
  while(low <=high){
        int mid= (low+high)/2;
    if(x==a[mid]){
        return mid;
    }
    else if(x>a[mid]){
        low=mid+1;

    }
    else {
          high=high-1;

           }


  return -1;
  }
}

int main(void){
int a[]={3,4,5,6,7,8,9};
int  x=7;
int size= sizeof(a)/sizeof(a[0]);
int result=Binarysearch(a,x,size-1,0);
if(result==-1){
    cout<<"not found";

}
else{
    cout<<"element is found in index:"<<result;
}
}





