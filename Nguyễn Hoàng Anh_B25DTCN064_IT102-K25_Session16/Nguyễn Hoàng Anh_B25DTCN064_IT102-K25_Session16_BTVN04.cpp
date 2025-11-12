#include<stdio.h>
#include<string.h>

int main(){
	char str[] = "hello world";
	char Characters;
	int i, count = 0, length = strlen(str);
	
	printf("Chuoi ban dau: %s\n", str);
	
	printf("Nhap mot ky tu bat ky: ");
	scanf("%c", &Characters);
	
	for(i = 0; i < length; i++){
		if(str[i] == Characters){
			count++;
		}
	}
	
	if(count){
		printf("So lan xuat hien cua %c la %d lan", Characters, count);
	} else{
		printf("Khong tim thay ky tu %c", Characters);
	}	

    return 0;
}


