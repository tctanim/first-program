#include <stdio.h>
#include <ctype.h>

int main() {


     char lowercase_char = 'r';
     char uppercase_char = 'r';

     while (lowercase_char == uppercase_char){
      if ( lowercase_char == lowercase_char){
        printf("TTT =");
        scanf(" %c", &lowercase_char);
        char uppercase_char = toupper(lowercase_char);
        printf("TTT =%c\n", uppercase_char);        
      }
      printf("ttt ");
      scanf(" %c", &uppercase_char);
        char lowercase_char = tolower(uppercase_char);
          printf("ttt= %c\n", lowercase_char);
     }

    return 0;
}
