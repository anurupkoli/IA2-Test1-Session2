#include<stdio.h>

void input(float *base, float *height){
  printf("please enter the base of triangle\n");
  scanf("%f",base);
   printf("please enter the height of triangle\n");
     scanf("%f",height);
}

void find_area(float base, float height, float *area){
  *area = 0.5*(base*height);
}

void output(float base, float height, float area){
  printf("the area of the triangle is %.2f\n", area);
}

int main(){
  float base,height,area;
  input(&base, &height);
  find_area(base,height,&area);
  output(base, height, area);
  return 0;
}