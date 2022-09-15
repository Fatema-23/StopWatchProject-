#include<stdio.h>
#include<conio.h> //for clear screen
#define CYCLE 5
#ifdef _WIN64 // for windows delay
#define Sleep(x) Sleep(x*1000)
#else
#define system("cls") printf("\e[1;1H\e[2J")
#include<unistd.h> //sleep function for wait/delay its use for Linux or max
#endif // _WIN64

int main(){

int hour, minute, second;

printf("Enter Hour Minute Second:");
scanf("%d %d %d", &hour, &minute, &second);
system("cls"); //windows
int h=0,m=0,s=0;
while(1)
    {
  printf("%.2d:%.2d:%.2d\n", h, m, s);
  if(h==hour && m==minute && s==second)
  {
      break;
  }
else{
    system("cls");
  }
  s++;
  sleep(1); //function for delay
  if(s == CYCLE)
  {
      m++;
      s=0;
  }
  if(m == CYCLE)
  {
     h++;
     m=0;
  }
}



return 0;
}
