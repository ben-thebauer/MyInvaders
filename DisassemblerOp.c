#include <stdlib.h>
#include <stdio.h>

int disassemble(unsigned char *rom, int loc){
    unsigned char *instr = &rom[loc]; //pointer to assembly instruction at loc
    int offset = 1; //offset of instruction in bytes
    
    printf("%04x ", loc);

    switch(*instr){
        case 0x00: 
            printf("NOP"); break;
        case 0x01: 
            printf("LXI    B, $%02x%02x", instr[2], instr[1]); offset = 3; break;
        case 0x02: 
            printf("STAX   B"); break;
        case 0x03: 
            printf("INX    B"); break;
        case 0x04:
            printf("INR    B"); break;
        case 0x05:
            printf("DCR    B"); break;
        case 0x06:
            printf("MVI    B, $%02x", instr[1]); offset = 2; break;
        case 0x07:
            printf("RLC"); break;
        case 0x08:
            printf("NOP"); break;
        case 0x09:
            printf("DAD    B"); break;
        case 0x0a:
            printf("LDAX   B"); break;
        case 0x0b:
            printf("DCX    B"); break;
        case 0x0c:
            printf("INR    C"); break;
        case 0x0d:
            printf("DCR    C"); break;
        case 0x0e:
            printf("MVI    C, $%02x", instr[1]); offset = 2; break;
        case 0x0f:
            printf("RRC"); break;
        case 0x10:
            printf("NOP"); break;
        default: 
            printf("OTHER INSTR"); break;
    }
    printf("\n");
    return offset;
}

int main(int argc, char** argv){
    if(argc == 1){
        printf("Error: No file specified.\n");
        exit(1);
    }

    FILE *rf = fopen(argv[1], "rb"); //b because rom file is a binary file
    if(!rf){
        printf("Error: Could not open file.\n");
        exit(1);
    }

    fseek(rf, 0L, SEEK_END);
    int rf_size = ftell(rf);
    rewind(rf);

    unsigned char *buffer = malloc(rf_size);
    fread(buffer, rf_size, 1, rf);
    fclose(rf);

    int loc = 0;
    
    while(loc != rf_size)
        loc += disassemble(buffer, loc);

    return 0;
}
