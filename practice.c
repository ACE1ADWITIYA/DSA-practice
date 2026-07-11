#include<stdio.h>

//LINEAR SEARCH
/*
int main(){
    int arr[]={9,1,8,2,7,3,6,4,0,5},elem;
    int size=sizeof(arr)/sizeof(int);
    printf("enter the element\n");
    printf("%d\n",size);
    scanf("%d", &elem);
    for( int i=0; i<size;i++){
        if(arr[i]==elem){
            printf("FOUND");
        }
    }
    return 0;
}*/


//BINARY SEARCH
/*
int main(){
    int arr[]={11,12,22,23,33,34,44,45,55,56,66,67,77,78,88,89,90,99},elem;
    int size= sizeof(arr)/sizeof(int);
    //int takes 4 bytes and so each memory space for each array element is (value * 4bytes) and size of actual arr is 40
    int low=0,mid,high=size-1;
    //  configure the index and not the values and minus 1 because index starts from 0
    printf("enter the element to e searched=");
    scanf("%d",&elem);

    // printf("\n%d  %d\n", low,high);
    // printf("%d\n",mid);
    // printf("%d",arr[mid]);

    while(low<=high){
        mid= (low+high)/2;
        if(elem>arr[mid]){
            low=mid+1;
        }

        else if(elem<arr[mid]){
            high=mid-1;
        }
        else if(elem==arr[mid]){
            printf("FOUND");
            break;
        }

    }


    return 0;
}*/


//SORTER
/*
int main(){
    int arr[]={11,99,12,90,22,89,23,88,33,78,34,77,44,67,45,66,56};
    int size= sizeof(arr)/sizeof(int);
    
    for(int i=0;i<size;i++){
        printf( " %d ",arr[i]);
        for (int j=0;j<size;j++){
            if(arr[i]>arr[j]){
                arr[i]= arr[i]* arr[j];
                arr[j]=arr[i] / arr[j];
                arr[i]=arr[i] / arr[j];

            }
        }
    }
    printf("\n");

    for(int i=0;i<size;i++){
        printf( " %d ",arr[i]);
    }
}
*/

//SWAPPER
/*

int main(){
    int arr[]={1,9,2,8,3,7,4,6,5,0};
    int size=sizeof(arr)/sizeof(int);
    int c=0,b=size-1;
    // printf("%d",b);
    int * ptr1;
    int * ptr2;
    // printf("%d %d", *ptr1, *ptr2);
    while(c<b){
        ptr2=&arr[b];
        ptr1=&arr[c];
        int a=*ptr1;
        *ptr1=*ptr2;
        *ptr2=a;
        c++;
        b--;
    }
    for(int i=0;i<size;i++){
        printf(" %d ", arr[i]);
    }

    
    return 0;
}
*/
