#include<stdio.h>

int main(){
	int arr[5]={99,2,1,8,3};
	int size = sizeof(arr)/sizeof(int);
	int start = 0;
	
	printf("Mang chua duoc sap xep: ");
	for(int i=0 ; i<size ; i++){
		printf("%3d",arr[i]);
	}
	for(int i=0 ; i<size-1 ; i++){
		for(int j=0 ; j<size-i-1 ; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("\nMang sau khi duoc sap xep: ");
	for(int i=0 ; i<size ; i++){
		printf("%3d",arr[i]);
	}
	printf("\n");
	int n,mid;
	int searchvalue;
	printf("Hay nhap so can tim: ");
	scanf("%d",&n);
	searchvalue=n;
	//buoc 4: su dung vong lap while de duyet qua cac phan tu voi dieu kien start<=end
	while(start<=size){
		mid = (start+size)/2;
	//4.1: su dung menh de dieu kien if...else de so sanh gia tri o vi tri mid voi searchvalue
		if(arr[mid]==searchvalue){
			printf("Vi tri can tim tai vi tri %d\n",mid);
			return 0;
		}else if(arr[mid]>searchvalue){
			size = mid-1;
		}else{
			start=mid+1;
		}
	}
	//buoc 5: in ra ket qua va ket thuc chuong trinh
	printf("khong tim thay phan tu can tim");
	
	return 0;
}
