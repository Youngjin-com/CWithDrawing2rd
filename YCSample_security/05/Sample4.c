#include <stdio.h>

int main(void)
{
   int res; 

   printf("정수를 입력하세요. \n");
   scanf("%d", &res);

   if (res == 1){
      printf("1이 입력되었습니다. \n");
   }
   else if(res == 2){
      printf("2가 입력되었습니다. \n");
   }
   else{
      printf("1이나 2를 입력하세요. \n");
   }

   return 0;
}
