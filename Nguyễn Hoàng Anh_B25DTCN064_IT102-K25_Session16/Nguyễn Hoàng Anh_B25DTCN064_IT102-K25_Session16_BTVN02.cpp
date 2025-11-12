#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	int i;
	
	printf("Nhap mot chuoi bat ky: ");
	fgets(str, sizeof(str), stdin);
	
	str[strcspn(str, "\n")] = '\0';
	
	for(i = 0; i < strlen(str); i++){
		printf("%c\t",str[i]);
	}
	
	return 0 ;
}

