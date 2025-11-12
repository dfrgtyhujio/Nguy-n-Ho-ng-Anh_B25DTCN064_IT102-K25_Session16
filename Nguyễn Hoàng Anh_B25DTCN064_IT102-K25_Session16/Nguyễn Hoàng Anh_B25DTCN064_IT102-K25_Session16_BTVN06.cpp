#include<stdio.h>
#include<string.h>

int main(){
	char str[] = "hello world 2025";
	int i, count = 0, length = strlen(str);
	
	for(i = 0; i < length; i++){
		if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
			count++;
		}
	}
	
	printf("Chuoi: %s\n", str);
    printf("So ky tu la chu cai trong chuoi: %d\n", count);
    
	return 0;
}
