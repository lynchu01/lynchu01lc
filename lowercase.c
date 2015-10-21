#include "lowercase.h"

int lowercase(char c) {

   if (c >= 'A' && c <= 'Z')
     return 1;

   if (c >= 97 && c <= 122)
     return 0;

   return 0;

}



