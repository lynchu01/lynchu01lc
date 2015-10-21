#include <stdio.h>
#include "lowercase.h"

int main(int argc, char* argv[]) {
  
  char c;

  c = getchar();

  while (c != EOF) {

      if (!lowercase(c))
        printf("%c",c);
    
      if (lowercase(c))
        printf("%c",c+32);

      c = getchar();
}

 return 0;
}


