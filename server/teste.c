#include <stdio.h> 
#include <stdlib.h>


int main(){

    FILE *f = fopen("imagem.jpg", "r");
    //A imgame tem (33.624 bytes)
    fseek(f, 0L, SEEK_END); 
  
    // calculating the size of the file 
    long int res = ftell(f);

    printf("%ld\n", res);

    return 0; 
}
