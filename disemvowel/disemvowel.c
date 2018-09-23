#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

#include "disemvowel.h"

char *disemvowel(char *str) {
  int len, i;
  char *result;
  int resultpointer = 0;
  int notvowelCount = 0;
  len = strlen(str);
  for (i = 0; i < len; ++i) {
    if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U'){
	  notvowelCount++;
    }
  }
  result = (char*) calloc(notvowelCount+1, sizeof(char));
  for (i=0; i < len; ++i) {
    if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U'){
    result[resultpointer] = str[i];
    resultpointer++;
    }
  }
  result[notvowelCount] = '\0';

  return result;

}
