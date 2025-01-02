#include<stdio.h>
#include<string.h>


int main(){
    char str[]="xin chao toi ten la Tran Hoang Thanh";
    printf("chuoi ki tu ban dau la : %s", str);
    char kiTu;
    printf("\n\nmoi ban nhap 1 ki tu muon xoa: ");
    scanf("%c",&kiTu);
    for(int i=0 ; i< strlen(str); i++){
        if(str[i] == kiTu){
            for(int j=i; j< strlen(str); j++){
                str[j]= str[j+1];
            }
        }
    }

    printf("\n\nchuoi ki tu sau khi xoa di ki tu '%c' la: %s\n", kiTu, str);
   
    



    return 0;
}