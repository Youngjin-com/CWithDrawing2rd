#include <stdio.h>

int main(void)
{
   FILE *fp; 

   if(fopen_s(&fp, "test1.txt", "w") != 0){
      printf("파일이 열리지 않습니다. \n");
      return 1;
   }
   else{
      printf("파일을 열었습니다. \n");
   }

   fputs("Hello!\n", fp);
   fputs("Goodbye!\n", fp);
   printf("파일로 출력했습니다. \n");

   fclose(fp);
   printf("파일을 닫았습니다. \n");

   return 0;
}
