#include <stdio.h>
#include <stdlib.h>
#include "search.h"


int main(){

    char patternized[64];
    char* facelets = "DRLUUBFBRBLURRLRUBLRDDFDLFUFUFFDBRDUBRUFLLFDDBFLUBLRBD";
    char *sol = solution(
        facelets,
        24,
        1000,
        0,
        "cache"
    );

    puts(sol);
    free(sol);
    return 0;

    

}