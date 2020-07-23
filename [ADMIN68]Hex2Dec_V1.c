#include <stdio.h>
char hex[5]={"Oxfe"};
char dec;
int main(){
    printf("Enter The Hex Input\n");
    printf("----Format:Oxfe------");
    //gets(hex);//gets input into hex array
    dec=(hex[2]*16)+(hex[3]*1);//converst hex to dec
    printf("---------------------\n");
    printf("Hex_Input:%s\n",hex);
    printf("Dec_Output:%c\n",dec);
    printf("Hex(%s) = Dec(%c)",hex,dec);
    return 0;
}