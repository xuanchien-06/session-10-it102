#include<stdio.h>

int main(){
	int arr[5]={1,2,3,4,5};
	int n;
	printf("Hay nhap phan tu can tim: ");
	scanf("%d",&n);
	for(int i=0;i<5;i++){
		if(arr[i]==n){
			printf("Phan tu %d nam o vi tri %d ",n,i);
			return 0;
		}
	}
	printf("phan tu %d khong nam trong mang",n);
	return 0;
}
