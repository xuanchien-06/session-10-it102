#include<stdio.h>

int main(){
	int arr[]={10,11,90,6,9};
	int size = sizeof(arr)/sizeof(arr[0]);
	for(int i = 1; i < size; i++){   //duyet qua cac phan tu tu thu hai
		int key = arr[i];            //lay phan tu hien tai lam key
		int j = i - 1;               //vi tri phan tu luc truoc do
		while (j >= 0 && arr[j] > key){   //di chuyen cac phan tu lon hon key sang phair
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;             //chen key vao vi tri dung
	}
	printf("mang sau khi chen: ");
	for(int i=0 ; i < size ; i++){
		printf("%3d",arr[i]);
	}
	printf("\n");
	return 0;
}
