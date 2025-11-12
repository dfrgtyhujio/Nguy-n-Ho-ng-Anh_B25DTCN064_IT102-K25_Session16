#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "Hello my gmail is test123@gmail.com";
    int i, countLetter = 0, countNumber = 0, countSpecial = 0, length = strlen(str);
    
    for(i = 0; i < length; i++){
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
            countLetter++;
        } else if(str[i] >= '0' && str[i] <= '9'){
            countNumber++;
        } else{
            countSpecial++;
        }
    }
    
    printf("Chuoi: %s\n", str);
    printf("So ky tu la chu cai: %d\n", countLetter);
    printf("So ky tu la so: %d\n", countNumber);
    printf("So ky tu dac biet: %d\n", countSpecial);
    
    return 0;
}

