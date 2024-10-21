#include <iostream>
using namespace std;
void selectionSort(int a[],int size){
    int i,j,temp,min;
    for(i=0;i<=size-1;i++){
        min=i;
        for(j=i+1;j<=size-1;j++){
            if(a[j]<a[min])
            min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}
int main() {
    int data[5]={3,2,5,77,44};
    cout<<"Given array"<<endl;
    for(int i=0;i<=4;i++)  cout<<data[i]<<"\t";
    cout<<"\nApplied Selection sort"<<endl;
    selectionSort(data,5);
    for(int i=0;i<=4;i++)  cout<<data[i]<<"\t";
    return 0;
}
