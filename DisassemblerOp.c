#include <stdlib.h>
#include <stdio.h>

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



    return 0;
}
