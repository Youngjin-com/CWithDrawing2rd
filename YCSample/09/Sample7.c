#include <stdio.h>

/* swap 함수의 선언 */
void swap(int *pX, int *pY);

int main(void)
{
   int num1 = 5;
   int num2 = 10;

   printf("변수 num1의 값은 %d입니다. \n", num1);
   printf("변수 num2의 값은 %d입니다. \n", num2);
   printf("변수 num1과 num2의 값을 교환합니다. \n", num1);

   swap(&num1, &num2);

   printf("변수 num1의 값은 %d입니다. \n", num1);
   printf("변수 num2의 값은 %d입니다. \n", num2);

   return 0;
}

/* swap 함수의 정의 */
void swap(int *pX, int *pY)
{
   int tmp;

   tmp = *pX;
   *pX = *pY;
   *pY = tmp;
}
