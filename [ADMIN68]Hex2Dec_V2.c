#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int i;//counter for loops
int index;
char x;//first hex
int x$;//index of 1st hex
char y;//second hex
int y$;//index of 2nd hex
int dec; //value of converted hex in decimal
//char input[5]={"0xfe"};
int correct; //flag wen hex correct
char input[5];
char hex[17]={"0123456789abcdef"};
int FindIndex(char xx);

void cls(){ //clears screen
    //for(i=0;i<=30;i++){printf("\n");}
    system("cls");
}
void getInput(){
    int done=0;
    while(done==0){
        printf("INPUT THE HEX\n");
        printf("--format:Oxfe--\n");
        printf("please use Small letters\n");
        printf("Input:");
        gets(input);
        if(input[0]=='0'){
            if(input[1]=='x'){
                for(i=0;i<=15;i++){//checking place 3 index 2 "input[2]"
                    printf("checking place 3\n");
                    printf("hex:[%c] input[%c]\n",hex[i],input[2]);
                    if(hex[i]==input[2]){
                        for(int i2=0;i2<=15;i2++){//checking place 3 index 2 "input[2]"
                            printf("checking place 4\n");
                            printf("hex:[%c] input[%c]\n",hex[i2],input[3]);
                            if(hex[i2]==input[3]){
                                printf("@4 Match\n");
                                done=1;
                                correct=1;
                                return;
                            }
                        }
                        cls();
                        if(input[3]= ' '){
                            //printf("1 value Hex Detected\n");
                            input[3]=input[2];
                            input[2]='0';
                            correct=1;
                            return;
                        }
                        cls();
                        printf("Previous_Input:%s\n",input);
                        printf("Wrong Hex Value @4 [%c]\n",input[3]);
                        printf("--------------------\n");
                        return;
                        //getInput();
                    }
                }
                cls();
                printf("Previous_Input:%s\n",input);
                printf("Wrong Hex Value @3 [%c]\n",input[2]);
                if(input[2]=='\0'){printf("Error:\nPlease input atleast 1 hex value\n");}
                printf("--------------------\n");
                return;
                //getInput();
            }
            else{
                cls();
                printf("Previous_Input:%s\n",input);
                printf("Input Format Wrong @2 [%c]\n",input[1]);
                printf("--------------------\n");
                return;
                //getInput();
            }
        }
        else{
            cls();
            printf("Previous_Input:%s\n",input);
            printf("Input Format Wrong @1 [%c]\n",input[0]);
            printf("--------------------\n");
            return;
            //getInput();
        }
    }
cls();
printf("Value Accepted %s",input);
}
int main(){
while(1){
    //get input
    correct = 0;
    printf("--------------------\n");
    getInput();
    //cls();
    if(correct==1){
        cls();
        x = input[2];
        y = input[3];
        //FindIndex('e');
        x$ = FindIndex(x);
        y$ = FindIndex(y);
        if(input[4]!='\0'){
            printf("please only write 2 hex values\n");
            printf("Wrong Input:%s\n",input);
            printf("Corrected:\n");
            input[4]='\0';
            }
        printf("Input [%s]\n",input);
        printf("x=[%c] y=[%c]\n",x,y);
        //printf("indexX=%d indexY=%d\n",x$,y$);
        dec = (x$*16)+(y$*1);
        printf("HEX_INPUT=%s\n",input);
        printf("DECIMAL  =%d\n",dec);
    }
}
return 0;
}
int FindIndex(char xx){
    index = 0;
    //printf("started FindIndex\n");
    for(i=0;i<=17;i++){
        //printf("xx=%c hex[i]=%c\n",xx,hex[i]);
        if(hex[i]==xx){
            index = i;
            //printf("found\n");
            //break;
        }
        //if(index>0){break;}
    }
    return index;
}
