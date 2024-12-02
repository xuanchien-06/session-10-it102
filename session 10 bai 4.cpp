#include<stdio.h>

int main(){
	int arr[]={2,5,7,1,4,55,44};
	int size = sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<size ; i++){
		int min = i;
		for(int j = i+1 ; j< size ; j++){
			if(arr[j]<arr[min]){
				min = j;
			}
		}
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
	printf("mang sau khi duoc sap xep: ");
	for(int i=0; i<size ; i++){
		printf("%3d",arr[i]);
	}
	printf("\n");
	return 0;
}
