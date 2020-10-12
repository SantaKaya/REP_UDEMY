#include <stdio.h>
#include <string.h>



int main(){

   char str1[] = "pedro@gmail.com";
   char car = '@';

   char *ret = strchr(str1, car);

printf("A partir do %c esta %s", car, ret);

    

    

    return 0;
}