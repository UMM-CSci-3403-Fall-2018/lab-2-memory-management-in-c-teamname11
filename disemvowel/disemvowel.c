#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

#include "disemvowel.h"

char *disemvowel(char *str) {
  int len, i;
  int notvowelCount;
  char *result;
  int resultpointer;
  int *notvowelArray;

  resultpointer = 0;
  notvowelCount = 0;
  len = strlen(str);
  notvowelArray=  (int*) calloc(len+1, sizeof(int));
  for (i=0; i < len; i++) {
    notvowelArray[i] = 0;
    if (tolower(str[i])!='a'){
	  notvowelCount++;
	  notvowelArray[i] = 1;
    }
    if (tolower(str[i])!='e'){
          notvowelCount++;
	  notvowelArray[i] = 1;
    }
    if (tolower(str[i])!='i'){
          notvowelCount++;
	  notvowelArray[i] = 1;
    }
    if (tolower(str[i])!='o'){
          notvowelCount++;
	  notvowelArray[i] = 1;
    }
    if (tolower(str[i])!='u'){
          notvowelCount++;
	  notvowelArray[i] = 1;
    }
  }
  if(notvowelCount==0){
  return '\0';
  }
  result = (char*) calloc(notvowelCount+1, sizeof(char));
  for (i=0; i<len; ++i) {
    if (notvowelArray[i]==1){
    result[resultpointer] = str[i];
    resultpointer++;
    }
  }
  result[notvowelCount] = '\0';

  return result;

}
