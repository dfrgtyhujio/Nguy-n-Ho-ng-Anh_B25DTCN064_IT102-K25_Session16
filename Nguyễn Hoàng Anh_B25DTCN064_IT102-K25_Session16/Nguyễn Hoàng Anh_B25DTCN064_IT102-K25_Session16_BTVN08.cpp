#include<stdio.h>
#include<string.h>

int main(){
	char str[] = "hello world";
	int i, length = strlen(str);
	
	printf("Chuoi ban dau: %s\n", str);
	
	
	if(str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;
    }
    
	for(i = 0; i < length; i++){
		if(str[i - 1] == ' ' && (str[i] >= 'a' && str[i] <= 'z')){
			str[i] = str[i] - 32;
		}
	}
	
	printf("Chuoi sau khi viet hoa chu cai dau moi tu: %s\n", str);

    return 0;
}


