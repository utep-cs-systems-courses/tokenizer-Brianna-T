#include <stdio.h>

//My tokenizer

int space_char(char c){ //return True if non-zero, if space char
  //first grab the c and check if it matches space type char
  if(*c=='\t' || ' '){
    return 1;
  }
  return 0;
}

int non_space_char(char c){ //return True if non-space char
  if(*c!='\t' || ' '){
    return 1;
  }
  return 0;
}

char *word_start(char *str){ //return the start, or first, char of the string (return pointer)
  while(*str!='\0'){
    if(non_space_char(char c)==0){
      return str;
    }
    return 0;
    str++;
  }
}

char *word_end(char *str){ //return the end, or last, char of the string (refer to Git)
  while(*str!='\0'){
    if(space_char(char c)==0){//if the pointer is at a space char
      return *str-1;//returning what was before the space char
    }
    str++
   }
}

int count_words(char *str){ //return the amount of words in the string (counting spaces)
  int count=0;
  while(*str!='\0'){
    if(*str=='\t' || ' '){
      count++;
    }
    str++;
  }
  return count;//returning the value of count, AKA amount of words
}

char *copy_str(char *inStr, short len){ //returns string and the amount of char in it

}

//Tokenizer
char **tokenize(char* str){

}

void print_tokens(char **tokens){

}

char *get_token(char **tokens, int id){

}

void free_tokens(char **tokens){

}
