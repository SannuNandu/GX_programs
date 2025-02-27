
/*
#include <stdio.h>

#include <stdint.h>

void check_system_endianness(){

    unsigned int x=1; // This integer (x) is stored in memory as 0x00000001.

    char *c=(char *)&x; // char *c points to the first byte of x in memory.

    if (*c){ // *c == 1, the system is Little Endian.

        printf("System is Little Endian\n");

    } else{ // *c == 0, the system is Big Endian.

        printf("System is Big Endian\n");

    }

}

int main(){

    check_system_endianness();

    return 0;

}
*/ 






#include <stdio.h>
#include <stdint.h>
 
int isLittleEndian(){
    int num=1;
    return (*(char *)&num==1); // Typecasts num as a pointer to a char, so we only examine the first byte.
}
unsigned int toBigEndian(unsigned int num){
    return ((num >> 24) & 0x000000FF) | ((num >> 8)  & 0x0000FF00) | ((num << 8)  & 0x00FF0000) | ((num << 24) & 0xFF000000);
}
int main(){
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);
    printf("Decimal Representation: %u (Hex: 0x%08X)\n", num, num);
 
    if (isLittleEndian()){
        printf("System Endianness: Little Endian\n");
    } else{
        printf("System Endianness: Big Endian\n");
    }
    uint32_t bigEndianNum = toBigEndian(num);
    printf("Big Endian Format: 0x%08X\n", bigEndianNum);
    uint32_t littleEndianNum = isLittleEndian() ? num : toBigEndian(num);
    printf("Little Endian Format: 0x%08X\n", littleEndianNum);
 
    return 0;
}

















