#include<stdio.h>
#include<string.h>
#include<math.h>

int Binary_to_Text(char *binary){
int decimal= 0;
int length= strlen(binary);
for(int i=0;i<length;i++){
        if(binary[i]=='1'){
    decimal=decimal+pow(2,length-1-i);
}
}
return decimal;

}

int main(){

    char input[1000], byte[9];
    int i=0,j=0;
    printf("Enter Binary number : ");
    fgets(input,1000,stdin);

    printf("The Text is: ");
    while(input[i]!='\0'){
        if(input[i]!=' '){
        byte[j]=input[i];

        j++;
        }
        i++;

        if(j==8){
            byte[j]='\0';
            int value=Binary_to_Text(byte);
            printf("%c",value);
            j=0;
        }

    }
    printf("\n");
    return 0;
}
