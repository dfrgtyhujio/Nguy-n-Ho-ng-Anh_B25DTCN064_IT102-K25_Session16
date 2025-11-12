#include<stdio.h>
#include<string.h>

int main(){
	char str[] = "hello world";
	int i, count = 0, length = strlen(str);
	
	if(length > 0) {
        count = 1;
    }
    
    for(i = 0; i < length; i++){
		if(str[i] == ' '){
			count++;
		}
	}
	
	printf("Chuoi: %s\n", str);
    printf("So tu trong chuoi: %d\n", count);
    
	return 0;
}
