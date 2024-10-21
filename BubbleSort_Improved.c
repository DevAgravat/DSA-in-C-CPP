
#include <stdio.h>
void bubblesort(int a[],int size){
    int pass,swapped=1,i,temp;
    for(pass = size-1;pass>=0&&swapped;pass--){
        swapped=0;
        for(i=0;i<=pass-1;i++){
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                swapped=1;
            }
        }
    }
    
}
int main() {
      int data[4]={12,54,2,5};
      printf("\nGiven Array:");
      for(int i=0;i<=3;i++) printf("%d ",data[i]);
      printf("\nSOrted arraay");
      bubblesort(data,4);
      for(int i=0;i<=3;i++) printf("%d ",data[i]);
      return 0;
      
}
