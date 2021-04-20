#include <stdio.h>
#include <string.h>
int main(void){
int nums;
int a;
int b;
int c;
printf("Įveskite fibonacci skaičių kiekį:\n");
if(0 == scanf("%d", &nums)) {
nums = 0;
scanf("%*s");
}
printf("\n");
a = 0;
b = 1;
while(nums>0){
printf("%d\n", (int)(a));
c = a+b;
a = b;
b = c;
nums = nums-1;
}
return 0;
}
