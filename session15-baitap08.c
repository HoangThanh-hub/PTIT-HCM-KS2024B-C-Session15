#include<stdio.h>
#include<string.h>

int main(){
    char str[]="Tran hoang Thanh";
    printf("chuoi truoc khi chuyen doi la: %s\n", str);

    for(int i=0; i<strlen(str); i++){
        if(i==0 && str[i] >= 97 && str[i] <= 122){
            str[i]-= 32;
        }
        if (str[i] == 32 && str[i+1] >= 97 && str[i+1] <= 122){
            str[i+1]  -= 32;
        }
    }
    printf("chuoi sau khi chuyen doi la: %s\n", str);


    return 0;
}
