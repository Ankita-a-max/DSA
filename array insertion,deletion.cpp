



#include<iostream>
using namespace std;

void bublesort(int a[],int n)
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            a[i]>a[i+j];
            swap(a[j],a[i+j]);
        }
    }
}
int binarysearch(int a[],int size,int target)
{
    int low;
    int high=size -1;
    int ind=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==target)
        {
            ind=mid;
            break;
        }
        else if(a[mid]<target)
        {
            low=mid +1;
        }
        else
        {
            high=mid-1;
        }
    }
    return ind;

}
int main()
{
    int size,target;
    cout<<"enter the size of array:";
    cin>>size;

    int a[size];
    for(int i=0; i<size; i++)
    {
        cin>>a[i];
    }
    cout<<"enter the target of array:";
    cin>>target;
    int ind= binarysearch( a, size, target);
    if(ind==-1)
    {
        cout<<"not found"<<endl;

    }
    else
    {
        cout<<"found"<<ind<<endl;
    }
    return 0;
}
