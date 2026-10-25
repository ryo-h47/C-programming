#include<stdio.h>
#include<string.h>

int isPalindrome(char *str, int len){

  if((len == 1) || (len == 0)){
    return 1;
  }else{
    if(str[0] == str[len-1]){
      str++;
      return isPalindrome(str, len-2);
    }else{
      return 0;
    }
  }
}

void check(char *str){
    int len = strlen(str);
    printf("%s is ",str);
    if(isPalindrome(str,len)!=0){
        printf("a palindrome.\n");
    }else{
        printf("not a palindrome.\n");
    }
}

int main(){
    check("ABC");
    check("ABCBA");
    check("A");
    check("aza 101 aza");
    check("aza101 aza");

    return 0;
}