#include<stdio.h>
void bubble_sort(int a[],int n);
int main(){
    int Array[100];
    int size;
    printf("\nEnter Size of Array:");
    scanf("%d",&size);  
    /*if size is greater than 100, change the size of Array[] (declared globally)
    as per the requirement.
    */
   printf("\nEnter the elements of Array:");
   for(int i=0;i<=size-1;i++)
   scanf("%d",&Array[i]);
   bubble_sort(Array,size);
   printf("\nSorted Array:");
   for(int i=0;i<=size-1;i++)
   printf("  %d",Array[i]);
    return 0;
}
void bubble_sort(int a[],int n)
   {
     int i,j;
     /*
     >Outer loop is for number of passes/scans.
     >Inner loop is for number of comparison in each scans.
     >Number of passes is N-1 if Array size is N.
     
     */
    for(i=0;i<=n-2;i++){
          for(j=0;j<=n-2-i;j++){
            if(a[j]>a[j+1])
            {

                int temp =a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
             }
                               }
            
                        }
    }

