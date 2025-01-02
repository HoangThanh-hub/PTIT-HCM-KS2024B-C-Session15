#include<stdio.h>
#include<string.h>

int main(){
    char str[]="Hello my gmail is test123@gmail.com";

    int so=0, chu=0, kiTu=0;

    for(int i=0; i< strlen(str); i++){
        if(str[i] >= 65 && str[i] <= 90 ||str[i] >= 97 && str[i] <= 122){
            chu++;
        }else if(str[i] >= 48 && str[i] <= 57){
                so++;
            }else{
                kiTu++;
            }
        
    }
    printf("so ki tu la chu cai la: %d\n", chu);
    printf("so ki tu la chu so la: %d\n", so);
    printf("so ki tu dac biet la: %d\n", kiTu);


    return 0;
}
