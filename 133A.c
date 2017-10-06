#include <stdio.h>

int main(){
  char c;
  while((c = getchar()) != '\n'){
    if(c == 'H' || c == 'Q' || c == '9'){
        printf("YES\n");
        return 0;
    }
  }
  printf("NO\n");
  return 0;
}