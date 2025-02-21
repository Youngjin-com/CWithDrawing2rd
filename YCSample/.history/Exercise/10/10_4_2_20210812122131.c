#include <stdio.h>

/* search 함수의 선언 */
int search(char *str);

int main(void)
{
   char str[100];
   int ans;

   printf("문자열을 입력하세요. \n");
   scanf_s("%s", str);

   ans = search(str);

   printf("%s 안에 a는 %d개 있습니다. \n", str, ans);

   return 0;
}

/* search 함수의 정의 */
int search(char *str)
{
   int c = 0;

   while(*str){
      if(*str == 'a'){
        c++;
      }
      str++;
   }

   return c;
}
