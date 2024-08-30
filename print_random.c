//Given Project code
#include "random.c"

char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size);
     }
     return s;
}

void rand_string(char *s, size_t size){
     for (size_t i = 0; i<size;i++){
          // fill string with rand chars
          s[i]= randchar();
     }
     // if null termiate the string
     s[size]='/0';
}

int main(){
srand(time(NULL));
     // the characters in the string is resticeted to 7 letters
     char *randomStr=rand_string_alloc(7);
     printf("String:%s\n",randomStr);
     return 0;
     
}
