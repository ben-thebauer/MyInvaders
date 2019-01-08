#include <stdlib.h>
#include <stdio.h>

/*TODO
  write main
*/

typedef struct ConditionCodes {    
    uint8_t z:1;    
    uint8_t s:1;    
    uint8_t p:1;    
    uint8_t cy:1;    
    uint8_t ac:1;    
    uint8_t pad:3;    
} ConditionCodes;

typedef struct state {    
    uint8_t a;    
    uint8_t b;    
    uint8_t c;    
    uint8_t d;    
    uint8_t e;    
    uint8_t h;    
    uint8_t l;    
    uint16_t sp;    
    uint16_t pc;    
    uint8_t *memory;    
    struct ConditionCodes cc;    
    uint8_t int_enable;    
} state;

void unimplementedInstruction(state *s){
    s->pc--;
    printf("Error: Instruction not implemented.\n");
    exit(1);
}

int emulate(state *s){
    
    unsigned char *opcode = &s->memory[s->pc];
    s->pc++;
    
    printf("opcode: %02x\n", *opcode);

    switch(*opcode){
        case 0x00: //NOP
            break;
        case 0x01: //LXI B
            unimplementedInstruction(s);
            break;
        case 0x02: //STAX B 
            unimplementedInstruction(s);
            break;
        case 0x03: //INX B
            unimplementedInstruction(s);
            break;
        case 0x04: //INR B
            unimplementedInstruction(s);
            break;
        case 0x05: //DCR B
            unimplementedInstruction(s);
            break;
        case 0x06: //MVI B
            unimplementedInstruction(s);
            break;
        case 0x07: //RLC
            unimplementedInstruction(s);
            break;
        case 0x08: //NOP
            unimplementedInstruction(s);
            break;
        case 0x09: //DAD B
            unimplementedInstruction(s);
            break;
        case 0x0a: //LDAX B
            unimplementedInstruction(s);
            break;
        case 0x0b: //DCX B
            unimplementedInstruction(s);
            break;
        case 0x0c: //INR C
            unimplementedInstruction(s);
            break;
        case 0x0d: //DCR C
            unimplementedInstruction(s);
            break;
        case 0x0e: //MVI C
            unimplementedInstruction(s);
            break;
        case 0x0f: //RRC
            unimplementedInstruction(s);
            break;

        case 0x10: //NOP
            unimplementedInstruction(s);
            break;
        case 0x11: //LXI D
            unimplementedInstruction(s);
            break;
        case 0x12: //STAX D
            unimplementedInstruction(s);
            break;
        case 0x13: //INX D
            unimplementedInstruction(s);
            break;
        case 0x14: //INR D
            unimplementedInstruction(s);
            break;
        case 0x15: //DCR D
            unimplementedInstruction(s);
            break;
        case 0x16: //MVI D
            unimplementedInstruction(s);
            break;
        case 0x17: //RAL
            unimplementedInstruction(s);
            break;
        case 0x18: //NOP
            unimplementedInstruction(s);
            break;
        case 0x19: //DAD D
            unimplementedInstruction(s);
            break;
        case 0x1a: //LDAX D
            unimplementedInstruction(s);
            break;
        case 0x1b: //DCX D
            unimplementedInstruction(s);
            break;
        case 0x1c: //INR E
            unimplementedInstruction(s);
            break;
        case 0x1d: //DCR E
            unimplementedInstruction(s);
            break;
        case 0x1e: //MVI E
            unimplementedInstruction(s);
            break;
        case 0x1f: //RAR
            unimplementedInstruction(s);
            break;

        case 0x20: //RIM
            unimplementedInstruction(s);
            break;
        case 0x21: //LXI H
            unimplementedInstruction(s);
            break;
        case 0x22: //SHLD
            unimplementedInstruction(s);
            break;
        case 0x23: //INX H
            unimplementedInstruction(s);
            break;
        case 0x24: //INR H
            unimplementedInstruction(s);
            break;
        case 0x25: //DCR H
            unimplementedInstruction(s);
            break;
        case 0x26: //MVI H
            unimplementedInstruction(s);
            break;
        case 0x27: //DAA
            unimplementedInstruction(s);
            break;
        case 0x28: //NOP
            unimplementedInstruction(s);
            break;
        case 0x29: //DAD H
            unimplementedInstruction(s);
            break;
        case 0x2a: //LHLD
            unimplementedInstruction(s);
            break;
        case 0x2b: //DCX H
            unimplementedInstruction(s);
            break;
        case 0x2c: //INR L
            unimplementedInstruction(s);
            break;
        case 0x2d: //DCR L
            unimplementedInstruction(s);
            break;
        case 0x2e: //MVI L
            unimplementedInstruction(s);
            break;
        case 0x2f: //CMA
            unimplementedInstruction(s);
            break;

        case 0x30: //SIM
            unimplementedInstruction(s);
            break;
        case 0x31: //LXI SP
            unimplementedInstruction(s);
            break;
        case 0x32: //STA
            unimplementedInstruction(s);
            break;
        case 0x33: //INX SP
            unimplementedInstruction(s);
            break;
        case 0x34: //INR M
            unimplementedInstruction(s);
            break;
        case 0x35: //DCR M
            unimplementedInstruction(s);
            break;
        case 0x36: //MVI M
            unimplementedInstruction(s);
            break;
        case 0x37: //STC
            unimplementedInstruction(s);
            break;
        case 0x38: //NOP
            unimplementedInstruction(s);
            break;
        case 0x39: //DAD SP
            unimplementedInstruction(s);
            break;
        case 0x3a: //LDA
            unimplementedInstruction(s);
            break;
        case 0x3b: //DCX SP
            unimplementedInstruction(s);
            break;
        case 0x3c: //INR A
            unimplementedInstruction(s);
            break;
        case 0x3d: //DCR A
            unimplementedInstruction(s);
            break;
        case 0x3e: //MVI A
            unimplementedInstruction(s);
            break;
        case 0x3f:  //CMC
            unimplementedInstruction(s);
            break;

        case 0x40: //MOV B, B
            unimplementedInstruction(s);
            break;
        case 0x41: //MOV B, C
            unimplementedInstruction(s);
            break;
        case 0x42: //MOV B, D 
            unimplementedInstruction(s);
            break;
        case 0x43: //MOV B, E
            unimplementedInstruction(s);
            break;
        case 0x44: //MOV B, H
            unimplementedInstruction(s);
            break;
        case 0x45: //MOV B, L
            unimplementedInstruction(s);
            break;
        case 0x46: //MOV B, M
            unimplementedInstruction(s);
            break;
        case 0x47: //MOV B, A
            unimplementedInstruction(s);
            break;
        case 0x48: //MOV C, B
            unimplementedInstruction(s);
            break;
        case 0x49: //MOV C, C
            unimplementedInstruction(s);
            break;
        case 0x4a: //MOV C, D
            unimplementedInstruction(s);
            break;
        case 0x4b: //MOV C, E
            unimplementedInstruction(s);
            break;
        case 0x4c: //MOV C, H
            unimplementedInstruction(s);
            break;
        case 0x4d: //MOV C, L
            unimplementedInstruction(s);
            break;
        case 0x4e: //MOV C, M
            unimplementedInstruction(s);
            break;
        case 0x4f: //MOV C, A
            unimplementedInstruction(s);
            break;

        case 0x50:  //MOV D, B
            unimplementedInstruction(s);
            break;
        case 0x51: //MOV D, C
            unimplementedInstruction(s);
            break;
        case 0x52: //MOV D, C
            unimplementedInstruction(s);
            break;
        case 0x53: //MOV D, E
            unimplementedInstruction(s);
            break;
        case 0x54: //MOV D, H
            unimplementedInstruction(s);
            break;
        case 0x55: //MOV D, L
            unimplementedInstruction(s);
            break;
        case 0x56: //MOV D, M
            unimplementedInstruction(s);
            break;
        case 0x57: //MOV D, A
            unimplementedInstruction(s);
            break;
        case 0x58: //MOV E, B
            unimplementedInstruction(s);
            break;
        case 0x59: //MOV E, C
            unimplementedInstruction(s);
            break;
        case 0x5a: //MOV E, D
            unimplementedInstruction(s);
            break;
        case 0x5b: //MOV E, E
            unimplementedInstruction(s);
            break;
        case 0x5c: //MOV E, H
            unimplementedInstruction(s);
            break;
        case 0x5d: //MOV E, L
            unimplementedInstruction(s);
            break;
        case 0x5e: //MOV E, M
            unimplementedInstruction(s);
            break;
        case 0x5f: //MOV E, A
            unimplementedInstruction(s);
            break;

        case 0x60: //MOV H, B
            unimplementedInstruction(s);
            break;
        case 0x61: //MOV H, C
            unimplementedInstruction(s);
            break;
        case 0x62: //MOV H, D
            unimplementedInstruction(s);
            break;
        case 0x63: //MOV H, E
            unimplementedInstruction(s);
            break;
        case 0x64: //MOV H, H
            unimplementedInstruction(s);
            break;
        case 0x65: //MOV H, L
            unimplementedInstruction(s);
            break;
        case 0x66: //MOV H, M
            unimplementedInstruction(s);
            break;
        case 0x67: //MOV H, A
            unimplementedInstruction(s);
            break;
        case 0x68: //MOV L, B
            unimplementedInstruction(s);
            break;
        case 0x69: //MOV L, C
            unimplementedInstruction(s);
            break;
        case 0x6a: //MOV L, D
            unimplementedInstruction(s);
            break;
        case 0x6b: //MOV L, E
            unimplementedInstruction(s);
            break;
        case 0x6c: //MOV L, H
            unimplementedInstruction(s);
            break;
        case 0x6d: //MOV L, K
            unimplementedInstruction(s);
            break;
        case 0x6e: //MOV L, M
            unimplementedInstruction(s);
            break;
        case 0x6f: //MOV L  A
            unimplementedInstruction(s);
            break;

        case 0x70: //MOV M, B
            unimplementedInstruction(s);
            break;
        case 0x71: //MOV M, C
            unimplementedInstruction(s);
            break;
        case 0x72: //MOV M, D
            unimplementedInstruction(s);
            break;
        case 0x73: //MOV M, E
            unimplementedInstruction(s);
            break;
        case 0x74: //MOV M, H
            unimplementedInstruction(s);
            break;
        case 0x75: //MOV M, L
            unimplementedInstruction(s);
            break;
        case 0x76: //HLT
            unimplementedInstruction(s);
            break;
        case 0x77: //MOV M, A
            unimplementedInstruction(s);
            break;
        case 0x78: //MOV A, B
            unimplementedInstruction(s);
            break;
        case 0x79: //MOV A, C
            unimplementedInstruction(s);
            break;
        case 0x7a: //MOV A, D
            unimplementedInstruction(s);
            break;
        case 0x7b: //MOV A, E
            unimplementedInstruction(s);
            break;
        case 0x7c: //MOV A, H
            unimplementedInstruction(s);
            break;
        case 0x7d: //MOV A, L
            unimplementedInstruction(s);
            break;
        case 0x7e: //MOV A, M
            unimplementedInstruction(s);
            break;
        case 0x7f: //MOV A, A;
            unimplementedInstruction(s);
            break;

        case 0x80: //ADD B
            unimplementedInstruction(s);
            break;
        case 0x81: //ADD C
            unimplementedInstruction(s);
            break;
        case 0x82: //ADD D
            unimplementedInstruction(s);
            break;
        case 0x83: //ADD E
            unimplementedInstruction(s);
            break;
        case 0x84: // ADD H
            unimplementedInstruction(s);
            break;
        case 0x85: //ADD L
            unimplementedInstruction(s);
            break;
        case 0x86: //ADD M
            unimplementedInstruction(s);
            break;
        case 0x87: //ADD A
            unimplementedInstruction(s);
            break;
        case 0x88: //ADC B
            unimplementedInstruction(s);
            break;
        case 0x89: // ADC C
            unimplementedInstruction(s);
            break;
        case 0x8a: //ADC D
            unimplementedInstruction(s);
            break;
        case 0x8b: //ADC E
            unimplementedInstruction(s);
            break;
        case 0x8c: //ADC H
            unimplementedInstruction(s);
            break;
        case 0x8d: //ADC L
            unimplementedInstruction(s);
            break;
        case 0x8e: //ADC M
            unimplementedInstruction(s);
            break;
        case 0x8f: //ADC A
            unimplementedInstruction(s);
            break;

        case 0x90: //SUB B
            unimplementedInstruction(s);
            break;
        case 0x91: //SUB C
            unimplementedInstruction(s);
            break;
        case 0x92: //SUB D
            unimplementedInstruction(s);
            break;
        case 0x93: //SUB E
            unimplementedInstruction(s);
            break;
        case 0x94: //SUB H
            unimplementedInstruction(s);
            break;
        case 0x95: //SUB L
            unimplementedInstruction(s);
            break;
        case 0x96: //SUB M
            unimplementedInstruction(s);
            break;
        case 0x97: //SUB A
            unimplementedInstruction(s);
            break;
        case 0x98: //SBB B
            unimplementedInstruction(s);
            break;
        case 0x99: //SBB C
            unimplementedInstruction(s);
            break;
        case 0x9a: //SBB D
            unimplementedInstruction(s);
            break;
        case 0x9b: //SBB E
            unimplementedInstruction(s);
            break;
        case 0x9c: //SBB H
            unimplementedInstruction(s);
            break;
        case 0x9d: //SBB L
            unimplementedInstruction(s);
            break;
        case 0x9e: //SBB M
            unimplementedInstruction(s);
            break;
        case 0x9f: //SBB A
            unimplementedInstruction(s);
            break;

        case 0xa0: //ANA B
            unimplementedInstruction(s);
            break;
        case 0xa1: //ANA C
            unimplementedInstruction(s);
            break;
        case 0xa2: //ANA D
            unimplementedInstruction(s);
            break;
        case 0xa3: //ANA E
            unimplementedInstruction(s);
            break;
        case 0xa4: //ANA H
            unimplementedInstruction(s);
            break;
        case 0xa5: //ANA L
            unimplementedInstruction(s);
            break;
        case 0xa6: //ANA M
            unimplementedInstruction(s);
            break;
        case 0xa7: // ANA A
            unimplementedInstruction(s);
            break;
        case 0xa8: //XRA B
            unimplementedInstruction(s);
            break;
        case 0xa9: //XRA C
            unimplementedInstruction(s);
            break;
        case 0xaa: //XRA D
            unimplementedInstruction(s);
            break;
        case 0xab: //XRA E
            unimplementedInstruction(s);
            break;
        case 0xac: //XRA H
            unimplementedInstruction(s);
            break;
        case 0xad: //XRA L
            unimplementedInstruction(s);
            break;
        case 0xae: //XRA M
            unimplementedInstruction(s);
            break;
        case 0xaf: //XRA A
            unimplementedInstruction(s);
            break;

        case 0xb0: //ORA B
            unimplementedInstruction(s);
            break;
        case 0xb1: //ORA C
            unimplementedInstruction(s);
            break;
        case 0xb2: //ORA D
            unimplementedInstruction(s);
            break;
        case 0xb3: //ORA E
            unimplementedInstruction(s);
            break;
        case 0xb4: //ORA H
            unimplementedInstruction(s);
            break;
        case 0xb5: //ORA L
            unimplementedInstruction(s);
            break;
        case 0xb6: //ORA M
            unimplementedInstruction(s);
            break;
        case 0xb7: //ORA A
            unimplementedInstruction(s);
            break;
        case 0xb8: //CMP B
            unimplementedInstruction(s);
            break;
        case 0xb9: //CMP C
            unimplementedInstruction(s);
            break;
        case 0xba: //CMP D
            unimplementedInstruction(s);
            break;
        case 0xbb: //CMP E
            unimplementedInstruction(s);
            break;
        case 0xbc: //CMP H
            unimplementedInstruction(s);
            break;
        case 0xbd: //CMP L
            unimplementedInstruction(s);
            break;
        case 0xbe: //CMP M
            unimplementedInstruction(s);
            break;
        case 0xbf: //CMP A
            unimplementedInstruction(s);
            break;

        case 0xc0: //RNX
            unimplementedInstruction(s);
            break;
        case 0xc1: //POP B
            unimplementedInstruction(s);
            break;
        case 0xc2: //JNZ
            unimplementedInstruction(s);
            break;
        case 0xc3: //JMP
            unimplementedInstruction(s);
            break;
        case 0xc4: //CNZ
            unimplementedInstruction(s);
            break;
        case 0xc5: //PUSH B
            unimplementedInstruction(s);
            break;
        case 0xc6: //ADI
            unimplementedInstruction(s);
            break;
        case 0xc7: //RST
            unimplementedInstruction(s);
            break;
        case 0xc8: //RZ
            unimplementedInstruction(s);
            break;
        case 0xc9: //RET
            unimplementedInstruction(s);
            break;
        case 0xca: //JZ
            unimplementedInstruction(s);
            break;
        case 0xcb: //NOP
            unimplementedInstruction(s);
            break;
        case 0xcc: //CZ
            unimplementedInstruction(s);
            break;
        case 0xcd: //CALL
            unimplementedInstruction(s);
            break;
        case 0xce: //ACI
            unimplementedInstruction(s);
            break;
        case 0xcf: //RST 1
            unimplementedInstruction(s);
            break;

        case 0xd0: //RNC
            unimplementedInstruction(s);
            break;
        case 0xd1: //POP D
            unimplementedInstruction(s);
            break;
        case 0xd2: //JNC
            unimplementedInstruction(s);
            break;
        case 0xd3: //OUT
            unimplementedInstruction(s);
            break;
        case 0xd4: //CNC
            unimplementedInstruction(s);
            break;
        case 0xd5: //PUSH D
            unimplementedInstruction(s);
            break;
        case 0xd6: //SUI
            unimplementedInstruction(s);
            break;
        case 0xd7: //RST 2
            unimplementedInstruction(s);
            break;
        case 0xd8: //RC
            unimplementedInstruction(s);
            break;
        case 0xd9: //NOP
            unimplementedInstruction(s);
            break;
        case 0xda: //JC
            unimplementedInstruction(s);
            break;
        case 0xdb: //IN
            unimplementedInstruction(s);
            break;
        case 0xdc: //CC
            unimplementedInstruction(s);
            break;
        case 0xdd: //NOP
            unimplementedInstruction(s);
            break;
        case 0xde: //SBI
            unimplementedInstruction(s);
            break;
        case 0xdf: //RST 3
            unimplementedInstruction(s);
            break;

        case 0xe0: //RPO
            unimplementedInstruction(s);
            break;
        case 0xe1: //POP H
            unimplementedInstruction(s);
            break;
        case 0xe2: //JPO
            unimplementedInstruction(s);
            break;
        case 0xe3: //XTHL
            unimplementedInstruction(s);
            break;
        case 0xe4: //CPO
            unimplementedInstruction(s);
            break;
        case 0xe5: //PUSH H
            unimplementedInstruction(s);
            break;
        case 0xe6: //ANI
            unimplementedInstruction(s);
            break;
        case 0xe7: //RST 4
            unimplementedInstruction(s);
            break;
        case 0xe8: //RPE
            unimplementedInstruction(s);
            break;
        case 0xe9: //PCHL
            unimplementedInstruction(s);
            break;
        case 0xea: //JPE
            unimplementedInstruction(s);
            break;
        case 0xeb: //XCHG
            unimplementedInstruction(s);
            break;
        case 0xec: //CPE
            unimplementedInstruction(s);
            break;
        case 0xed: //NOP
            unimplementedInstruction(s);
            break;
        case 0xee: //XRI
            unimplementedInstruction(s);
            break;
        case 0xef: //RST 5
            unimplementedInstruction(s);
            break;

        case 0xf0: //RP
            unimplementedInstruction(s);
            break;
        case 0xf1: //POP PSW
            unimplementedInstruction(s);
            break;
        case 0xf2: //JP
            unimplementedInstruction(s);
            break;
        case 0xf3: //DI
            unimplementedInstruction(s);
            break;
        case 0xf4: //CP
            unimplementedInstruction(s);
            break;
        case 0xf5: //PUS PSW
            unimplementedInstruction(s);
            break;
        case 0xf6: //ORI
            unimplementedInstruction(s);
            break;
        case 0xf7: //RST
            unimplementedInstruction(s);
            break;
        case 0xf8: //RM
            unimplementedInstruction(s);
            break;
        case 0xf9: //SPHL
            unimplementedInstruction(s);
            break;
        case 0xfa: //JM
            unimplementedInstruction(s);
            break;
        case 0xfb: //EI
            unimplementedInstruction(s);
            break;
        case 0xfc: //CM
            unimplementedInstruction(s);
            break;
        case 0xfd: //NOP
            unimplementedInstruction(s);
            break;
        case 0xfe: //CPI
            unimplementedInstruction(s);
            break;
        case 0xff: //RST
            unimplementedInstruction(s);
            break;
    }
    return 0;
}

int main(void){
    //allocate state and its memory
    state *s = calloc(1, sizeof(state));
	s->memory = malloc(0x100000);

    //read romfile into memory
    FILE *rf = fopen("invaders", "rb");
    int sz;
    if(!rf){
        printf("Error: Could not find invaders file. \n");
        exit(1);
    }
    fseek(rf, 0L, SEEK_END);
    sz = ftell(rf);
    rewind(rf);
    fread(&s->memory[0], sz, 1, rf);
    fclose(rf);

    //call emulate + check for done
    int done = 0;
    while(!done){
        done = emulate(s);
    }

    return 0;
}
