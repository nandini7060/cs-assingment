#include<stdio.h>
int maxindex(int arr[],int size){
	int max=arr[0];
	int d;
	
	for( int i=0;i<size;i++){
		if(arr[i]>max)
			max=arr[i];
	}
	for(int i=0;i<size;i++){
		if(arr[i]==max)
		  d=i;
	}
	return d;
}
int minindex(int arr[],int size){
	int min=arr[0];
	int i,d;
	for(i=0;i<size;i++){
		if(arr[i]<min) min=arr[i];
	}
	for(i=0;i<size;i++){
		if(arr[i]==min) d=i;
	}
	return d;
	
}
float Average(int arr[],int size){
	float sum=0,a;
	for(int i=0;i<size;i++){
		sum=sum+arr[i];
		 a=sum/size;
	}
	return a;
}
void displayArray(int arr[],int size){
	for(int i=0;i<size;i++){
	printf("%d",arr[i]);
	printf("\n");
	}
}
int linearSearch(int arr[],int size,int value){
	 
	for(int i=0;i<size;i++){
		if(arr[i]==value)
		return i;
	}
	return -1;
	
}
int reverseArray(int arr[],int size){
	for(int i=(size-1);i>=0;i--){
		printf("%d",arr[i]);
	printf("\n");
		
		
	}
}
void sortArray(int arr[],int size){
	int temp;
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				 temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	
	}
}

int main(){
	int size,value;
	printf("enter size");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		printf("enter the array element%d-",i);
		scanf("%d",&arr[i]);
	}
	printf("display of array elements\n");
	displayArray(arr,size);
	printf("Index of Max value:%d", maxindex(arr,size));
	 printf("\nIndex of minimum value: %d", minindex(arr, size));
    printf("\nAverage of elements: %.2f", Average(arr, size));

    printf("\nReversed array:\n");
    reverseArray(arr, size);
    

    printf("\nSorted array:\n");
    sortArray(arr, size);
    displayArray(arr, size);

    printf("\nEnter value to search: ");
    scanf("%d", &value);
   int  index = linearSearch(arr, size, value);
    if (index !=-1)
        printf("%d found at index %d\n", value, index);
    else
        printf("%d not found in the array.\n", value);

    return 0;
}

	
	

	
		

	
