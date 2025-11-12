#include<stdio.h>
#include<string.h>

int main(){
	char str[] = "hello world";
	int i, length = strlen(str);
	
	printf("Chuoi ban dau: %s\n", str);
	
	printf("Chuoi dao nguoc: ");
    for(i = length - 1; i >= 0; i--){
        printf("%c", str[i]);
    }

    return 0;
}


