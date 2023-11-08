#include <stdio.h>

void getBinary(int number, int binary[8]){

    
    int i = 0;

    while (number > 0)
    {
        binary[i] = number % 2;
        number = number / 2;
        i++;
    }
    

    
}

int main(){

    

    char myChar;
    int binary[8];

    printf("Please enter a char");
    scanf("%c",myChar);

    printf("%c is %d in integer value and ", myChar, myChar);

    getBinary(myChar, binary);

    for (int i = 7; i >= 0; i--) { 
        printf("%d", binary[i]);
    }

    printf(" is in binary \n");
    

    return 0;
}