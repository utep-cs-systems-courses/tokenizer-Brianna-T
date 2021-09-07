#include <stdio.h>

//My tokenizer

int space_char(char c){ //return True if non-zero, if space char
  //first grab the c and check if it matches space type char
  if(
  
}

int non_space_char(char c){ //return True if non-space char
  
}

char *word_start(char *str){ //return the start, or first, char of the string (return pointer)

}

char *word_end(char *str){ //return the end, or last, char of the string (refer to Git)

}

int count_words(char *str){ //return the amount of words in the string (counting spaces)

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
