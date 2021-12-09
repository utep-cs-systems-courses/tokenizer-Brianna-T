#include <stdio.h>
#include "tokenizer.h"

int space_char(char *c){
  if(*c=='\t' || ' '){ //if pointer is pointing at a new line or space
    return 1; //returning true, 1 for non-zero
  }
  else{
    return 0;
  }
}

int non_space_char(char *c){ //opposite of space_char
  if(*c=='\t' || ' '){
    return 0;
  }
  else{
    return 1;
  }
}

char *word_start(char *str){
  while(*str!='\0'){
    if(non_space_char(char c)==0){
      return str;
    }
    else{
      return 0;
    }
    str++;
      }
}

char *word_end(char *str){
  while(*str!='\0'){
    if(space_char(c)==0){
      return str;
    }
    else{
      return 1;
    }
    str++;
      }
}

int count_words(char *str){
  count=0;
  while(*str!='\0'){
    if(*str=='\t'||' '){
      count++;
    }
    str++;
      }
}

  
