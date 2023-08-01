#include<iostream>
using namespace std;

int partation(int arr[],int s,int e){
    //first place=start
    int pivot=arr[s];
    int cnt=0;
    
    //pivot index ko place kr na h

    
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }

    //place piovet right index
    
    int pivotindex=s+cnt;
    swap(arr[pivotindex],arr[s]);

    
    //left and right place chek
    //<p|p|>p

    
    int i=s,j=e;
    while(i<pivotindex && j>pivotindex){

    
    while(arr[i]<=pivot){
        i++;


    }
    while(arr[j]>pivot){
        j--;

    }
    
     
    if(i<pivotindex && j>pivotindex){
        swap(arr[i++],arr[j--]);
    } 

}
return pivotindex;
}



    void quicksort(int arr[],int s,int e){
        if(s>=e)
        return;

        int p=partation(arr,s,e);
        //left part
        quicksort(arr,s,p-1);
        //right part
        quicksort(arr,p+1,e);


    }
    int main(){
    int arr[5]={2,3,1,9,6};
    int n=5;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
    }
