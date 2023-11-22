#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int maxArry[100];
	int n,numbers[n];
	int sumNumbers;
	int max,min;
	printf("Nhap chi so phan tu cua mang: ");
	scanf("%d",&n);	
	if(n>0&&n<100){
	do{
		printf("\nMENU\n");
		printf("1 nhap n gtri ptu\n");
		printf("2 in ra gia tri ptu\n");
		printf("3 tinh tong phan tu chia het cho 2 va 3 trong mang\n");
		printf("4 in ra gia tri lon nhat va nho nhat o trong mang\n");
		printf("5 sap xep chen mang tang dan\n");
		printf("6 tinh tong cac phan tu la nguyen to trong mang\n");
		printf("7 sap xep cac so chia het cho 5 le giam dan o dau, chan tang dan o cuoi\n");
		printf("8 nhap m va chen m vao mang theo vi tri tang dan");
		printf("9 thoat\n ");
		printf("Nhap su lua chon cua ban\n");
		int choice; scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap gia tri cho phan tu cua mang\n");
				for(int i=0;i<n;i++){
					printf("numbers[%d]=",i);
					scanf("%d",&numbers[i]);
				}
				break;
			case 2:
				printf("Cac gia tri ptu trong mang 1 chieu la:\n");
				for(int i=0;i<n;i++){
					printf("%d\t",numbers[i]);
				}
				break;
			case 3:
				sumNumbers=0;
				for(int i=0;i<n;i++){
					if(numbers[i]%2==0&&numbers[i]%3==0){
						sumNumbers+=numbers[i];
					}
				}
				printf("tong cac phan tu chia het cho 2 va 3 trong mang la %d",sumNumbers);
				break;
			case 4:
				max=numbers[0];
				min=numbers[0];
				for(int i=0;i<n;i++){
					if(max,numbers[i]){
						max=numbers[i];
					}else if(min>numbers[i]){
						min=numbers[i];
					}
				}
				printf("min=%d va max=%d",min,max);
				break;
			case 6:
				sumNumbers = 0;
				printf("Cac so nguyen to trong mang: ");
				for(int i=0;i<n;i++){
					//Kiem tra numbers[i] co phai la so nguyen to ko
					int isPrime = 0;//0:La so nguyen to - 1: ko phai so nguyen to
					if(numbers[i]>=2){
						for(int j=2;j<=sqrt(numbers[i]);j++){
							if(numbers[i]%j==0){
								//j la uoc cua numbers[i]
								isPrime = 1;
								break;
							}
						}
					}else{
						isPrime=1;
					}
					if(isPrime==0){
						//numbers[i] la so nguyen to
						printf("%d\t",numbers[i]);
						sumNumbers+=numbers[i];
					}
				}
				printf("\nTong cac so nguyen to la: %d\n",sumNumbers);
				
				break;
			case 5:
				for (int i=1;i<n;i++){
                int key=numbers[i];
                int j = i-1;
                while(j>=0 && key<numbers[j]){ 
                numbers [j+1] = numbers[j]; 
                j-=1;
                }
                numbers [j+1] = key;
                }
                 printf("Mang sau khi da sap xep tang dan:\n"); 
                for (int i=0;i<n;i++) {
                 printf("%d\t", numbers[i]);
                }
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				exit(0);
			default:
				printf("Vui long chon tu 1 de 8");
		}
	}while(1==1);
    }else{
    	printf("Chi so phan tu nhap khong hop le");
    	exit(0);
	}
}
