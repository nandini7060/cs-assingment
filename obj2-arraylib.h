#include<stdio.h>
int maxindex(int arr[],int size){
	int max=arr[0];
	int i;
	for( i=0;i<size;i++){
		if(arr[i]>max)
			max=i;
	}
	return max;
}
int minindex(int arr[],int size){
	int min=0;
	int i;
	for(i=0;i<size;i++){
		if(arr[i]<min) min=i;
	}
	return min;
	
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


    	
	

	
		

	
