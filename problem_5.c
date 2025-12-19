#include<stdio.h>
int main(){

    // file hochhe akta tag, tanim akta namm pointer.
    // int variaal er moto.
    FILE *tanim;
    // fopen mean file open korbe.er bitore file name,type, diclear.
    tanim = fopen("Tanim Bhai ER Heritese.txt", "w");
    // file er bitore print korbe (fprintf)
    fprintf(tanim, "My name is Md.Shahariar Hossen Tanim.");
    
    fclose (tanim);

    return 0;
}