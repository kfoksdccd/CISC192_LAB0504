#include "add.h"
#include "sub.h"

int main() {
    int    a = 10;
    int    b = 20;
    int    nAddTot;
    int    nSubTot;

    if ( (a <= MAX_NUM) && (b <= MAX_NUM) ) {
        nAddTot = add(a, b); 
        nSubTot = sub(a, b);    
    }
    return 0; 
}