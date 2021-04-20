#include <stdio.h>
int main(void){
int nums;
int a;
int b;
char d;
int c;
printf("How many fibonacci numbers do you want?\n");
if(0 == scanf("%d", &nums)) {
nums = 0;
scanf("%*s");
}
printf("\n");
a = 0;
b = 1;
d = '5';
while(nums>0){
printf("%d\n", (int)(a));
c = a+b;
a = b;
b = c;
nums = nums-1;
}
printf("%d\n", (int)(d));
return 0;
}
